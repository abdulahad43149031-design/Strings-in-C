<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>C String Programs Showcase</title>
    <script src="https://cdn.tailwindcss.com"></script>
    <link href="https://fonts.googleapis.com/css2?family=Inter:wght@400;500;600;700&display=swap" rel="stylesheet">
    <style>
        body {
            font-family: 'Inter', sans-serif;
        }
        /* Simple syntax highlighting colors for the code blocks */
        .code-block {
            background-color: #1E293B; /* slate-800 */
            color: #E2E8F0; /* slate-200 */
            border-radius: 0.5rem;
            padding: 1.5rem;
            font-family: 'Fira Code', 'Courier New', Courier, monospace;
            font-size: 0.9rem;
            line-height: 1.6;
            overflow-x: auto;
        }
        .code-keyword { color: #93C5FD; } /* blue-300 */
        .code-string { color: #A7F3D0; } /* emerald-200 */
        .code-comment { color: #9CA3AF; } /* gray-400 */
        .code-preprocessor { color: #FDBA74; } /* orange-300 */
        .code-function { color: #BEF264; } /* lime-300 */
        .code-type { color: #D8B4FE; } /* purple-300 */

        .terminal-block {
            background-color: #0F172A; /* slate-900 */
            color: #CBD5E1; /* slate-300 */
            border-radius: 0.5rem;
            padding: 1rem 1.5rem;
            font-family: 'Fira Code', 'Courier New', Courier, monospace;
            font-size: 0.9rem;
        }
        .terminal-input::before {
            content: '▶ ';
            color: #6EE7B7; /* emerald-300 */
        }
    </style>
</head>
<body class="bg-slate-50 text-slate-800 antialiased">

    <div class="container mx-auto max-w-4xl px-4 py-12">

        <!-- Header -->
        <header class="text-center mb-12">
            <h1 class="text-5xl font-bold text-slate-900 mb-2">C String Manipulation Playground 🚀</h1>
            <p class="text-lg text-slate-600">A collection of C programs for fundamental string operations.</p>
        </header>

        <!-- Features Section -->
        <section class="mb-16">
            <h2 class="text-3xl font-bold text-slate-900 border-b-2 border-slate-200 pb-2 mb-6">✨ Features</h2>
            <div class="grid md:grid-cols-2 gap-6 text-slate-700">
                <div class="bg-white p-6 rounded-lg shadow-sm border border-slate-200">
                    <h3 class="font-semibold text-lg mb-2">Basic Operations</h3>
                    <p>Essential functions like finding length, copying, and reversing strings.</p>
                </div>
                <div class="bg-white p-6 rounded-lg shadow-sm border border-slate-200">
                    <h3 class="font-semibold text-lg mb-2">Palindrome Checker</h3>
                    <p>A simple program to determine if a string is a palindrome.</p>
                </div>
                <div class="bg-white p-6 rounded-lg shadow-sm border border-slate-200">
                    <h3 class="font-semibold text-lg mb-2">Word Frequency Counter</h3>
                    <p>A utility to count occurrences of each unique word in a sentence.</p>
                </div>
                <div class="bg-white p-6 rounded-lg shadow-sm border border-slate-200">
                    <h3 class="font-semibold text-lg mb-2">Theory Cheatsheet</h3>
                    <p>A handy summary of key concepts and functions for C strings.</p>
                </div>
            </div>
        </section>

        <!-- File Breakdown Section -->
        <section>
            <h2 class="text-3xl font-bold text-slate-900 border-b-2 border-slate-200 pb-2 mb-8">📂 Code & Examples</h2>

            <!-- Card for basicPrograms.c -->
            <div class="bg-white rounded-xl shadow-lg p-8 mb-12 overflow-hidden border border-slate-200">
                <h3 class="text-2xl font-bold mb-1">1. `basicPrograms.c`</h3>
                <p class="text-slate-600 mb-6">A suite of basic functions for common string manipulations.</p>
<pre class="code-block"><code class="language-c"><span class="code-preprocessor">#include &lt;stdio.h&gt;</span>
<span class="code-preprocessor">#include &lt;string.h&gt;</span>

<span class="code-comment">/*
 * Main function to drive the program with a menu.
 * Note: Individual functions like printStr(), findLen(), copy(), reverseString()
 * are included but the main function provides an easy way to test them.
 */</span>
<span class="code-type">int</span> <span class="code-function">main</span>() {
    <span class="code-comment">// ... (menu logic to call helper functions) ...</span>
    
    <span class="code-comment">// Example: Manually calling reverseString()</span>
    <span class="code-type">char</span> testString[] = <span class="code-string">"hello world"</span>;
    
    <span class="code-type">int</span> rightPointer = <span class="code-function">strlen</span>(testString) - 1;
    <span class="code-type">int</span> leftPointer = 0;
    
    <span class="code-keyword">while</span> (leftPointer < rightPointer) {
        <span class="code-type">char</span> temp = testString[leftPointer];
        testString[leftPointer] = testString[rightPointer];
        testString[rightPointer] = temp;
        leftPointer++;
        rightPointer--;
    }
    <span class="code-function">printf</span>(<span class="code-string">"Reversed string is: %s\n"</span>, testString); <span class="code-comment">// Output is shown below</span>
    
    <span class="code-keyword">return</span> 0;
}</code></pre>
                <div class="mt-6">
                    <h4 class="font-semibold text-lg mb-2">Example Output (`reverseString`)</h4>
                    <div class="terminal-block">
                        <p>Reversed string is: dlrow olleh</p>
                    </div>
                </div>
            </div>

            <!-- Card for frequencyOfEachWord.c -->
            <div class="bg-white rounded-xl shadow-lg p-8 mb-12 overflow-hidden border border-slate-200">
                <h3 class="text-2xl font-bold mb-1">2. `frequencyOfEachWord.c`</h3>
                <p class="text-slate-600 mb-6">A program that counts the frequency of each word in a sentence.</p>
<pre class="code-block"><code class="language-c"><span class="code-preprocessor">#include &lt;stdio.h&gt;</span>
<span class="code-preprocessor">#include &lt;string.h&gt;</span>

<span class="code-type">int</span> <span class="code-function">main</span>() {
    <span class="code-type">char</span> str[500];
    <span class="code-type">char</span> words[100][50]; 
    <span class="code-type">int</span> frequency[100] = {0}; 
    <span class="code-type">int</span> count = 0;
    <span class="code-type">char*</span> token;

    <span class="code-function">printf</span>(<span class="code-string">"Enter the sentence: "</span>);
    <span class="code-function">fgets</span>(str, <span class="code-function">sizeof</span>(str), stdin);
    str[<span class="code-function">strcspn</span>(str, <span class="code-string">"\n"</span>)] = <span class="code-string">'\0'</span>;

    token = <span class="code-function">strtok</span>(str, <span class="code-string">" "</span>);
    <span class="code-keyword">while</span> (token != NULL) {
        <span class="code-type">int</span> found = 0;
        <span class="code-keyword">for</span> (<span class="code-type">int</span> i = 0; i < count; i++) {
            <span class="code-keyword">if</span> (<span class="code-function">strcmp</span>(words[i], token) == 0) {
                frequency[i]++;
                found = 1;
                <span class="code-keyword">break</span>;
            }
        }
        <span class="code-keyword">if</span> (!found) {
            <span class="code-function">strcpy</span>(words[count], token);
            frequency[count] = 1;
            count++;
        }
        token = <span class="code-function">strtok</span>(NULL, <span class="code-string">" "</span>);
    }
    <span class="code-function">printf</span>(<span class="code-string">"\n--- Word Frequency Results ---\n"</span>);
    <span class="code-keyword">for</span> (<span class="code-type">int</span> i = 0; i < count; i++) {
        <span class="code-function">printf</span>(<span class="code-string">"%s -> %d\n"</span>, words[i], frequency[i]);
    }
    <span class="code-keyword">return</span> 0;
}</code></pre>
            </div>
            
            <!-- Card for palindromic.c -->
            <div class="bg-white rounded-xl shadow-lg p-8 mb-12 overflow-hidden border border-slate-200">
                <h3 class="text-2xl font-bold mb-1">3. `palindromic.c`</h3>
                <p class="text-slate-600 mb-6">A program to check if a string is a palindrome.</p>
<pre class="code-block"><code class="language-c"><span class="code-preprocessor">#include &lt;stdio.h&gt;</span>
<span class="code-preprocessor">#include &lt;string.h&gt;</span>

<span class="code-comment">// Reverses a string in-place</span>
<span class="code-type">char*</span> <span class="code-function">reverse</span>(<span class="code-type">char</span> str[]) {
    <span class="code-type">int</span> len = <span class="code-function">strlen</span>(str);
    <span class="code-type">int</span> rightPointer = len - 1, leftPointer = 0;
    <span class="code-keyword">while</span> (leftPointer < rightPointer) {
        <span class="code-type">char</span> temp = str[leftPointer];
        str[leftPointer++] = str[rightPointer];
        str[rightPointer--] = temp;
    }
    <span class="code-keyword">return</span> str;
}

<span class="code-type">int</span> <span class="code-function">main</span>() {
    <span class="code-type">char</span> src[100], original_copy[100];
    <span class="code-function">printf</span>(<span class="code-string">"Enter a string: "</span>);
    <span class="code-function">fgets</span>(src, <span class="code-function">sizeof</span>(src), stdin);
    src[<span class="code-function">strcspn</span>(src, <span class="code-string">"\n"</span>)] = <span class="code-string">'\0'</span>;
    
    <span class="code-function">strcpy</span>(original_copy, src); <span class="code-comment">// Must copy before reversing!</span>
    
    <span class="code-keyword">if</span> (<span class="code-function">strcmp</span>(<span class="code-function">reverse</span>(src), original_copy) == 0) {
        <span class="code-function">printf</span>(<span class="code-string">"'%s' is a palindromic string.\n"</span>, original_copy);
    } <span class="code-keyword">else</span> {
        <span class="code-function">printf</span>(<span class="code-string">"'%s' is not a palindromic string.\n"</span>, original_copy);
    }
    <span class="code-keyword">return</span> 0;
}</code></pre>
                <div class="mt-6">
                    <h4 class="font-semibold text-lg mb-2">Example Input/Output</h4>
                    <div class="terminal-block">
                        <p><span class="terminal-input">Enter a string: madam</span></p>
                        <p class="text-white">'madam' is a palindromic string.</p>
                        <br>
                        <p><span class="terminal-input">Enter a string: hello</span></p>
                        <p class="text-white">'hello' is not a palindromic string.</p>
                    </div>
                </div>
            </div>

        </section>

        <!-- Footer -->
        <footer class="text-center mt-8 text-slate-500">
            <p>Happy Coding! 🎉</p>
        </footer>

    </div>
</body>
</html>
