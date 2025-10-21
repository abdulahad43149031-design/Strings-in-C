<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>C String Programs README</title>
    <script src="https://cdn.tailwindcss.com"></script>
    <link href="https://fonts.googleapis.com/css2?family=Inter:wght@400;500;600;700&display=swap" rel="stylesheet">
    <style>
        body {
            font-family: 'Inter', sans-serif;
        }
        /* Simple syntax highlighting colors */
        .code-block {
            background-color: #1E293B; /* slate-800 */
            color: #E2E8F0; /* slate-200 */
            border-radius: 0.5rem;
            padding: 1.5rem;
            font-family: 'Courier New', Courier, monospace;
            overflow-x: auto;
        }
        .code-keyword { color: #93C5FD; }
        .code-string { color: #A7F3D0; } 
        .code-comment { color: #9CA3AF; } 
        .code-preprocessor { color: #FDBA74; } 
        .code-function { color: #BEF264; } 
        .code-type { color: #D8B4FE; } 

        .terminal-block {
            background-color: #0F172A; /* slate-900 */
            color: #CBD5E1; /* slate-300 */
            border-radius: 0.5rem;
            padding: 1.5rem;
            font-family: 'Courier New', Courier, monospace;
        }
        .terminal-input::before {
            content: '▶ ';
            color: #6EE7B7; /* emerald-300 */
        }
        .terminal-output {
            color: #F87171; /* red-400 */
        }
    </style>
</head>
<body class="bg-slate-100 text-slate-800 antialiased">

    <div class="container mx-auto max-w-4xl px-4 py-12">

        <!-- Header -->
        <header class="text-center mb-12">
            <h1 class="text-5xl font-bold text-slate-900 mb-2">C String Manipulation Playground 🚀</h1>
            <p class="text-lg text-slate-600">A collection of C programs for fundamental string operations.</p>
        </header>

        <!-- Features Section -->
        <section class="mb-16">
            <h2 class="text-3xl font-bold text-slate-900 border-b-2 border-slate-300 pb-2 mb-6">✨ Features</h2>
            <div class="grid md:grid-cols-2 gap-6 text-slate-700">
                <div class="bg-white p-6 rounded-lg shadow-md">
                    <h3 class="font-semibold text-lg mb-2">Basic Operations</h3>
                    <p>Essential functions like finding length, copying, and reversing strings.</p>
                </div>
                <div class="bg-white p-6 rounded-lg shadow-md">
                    <h3 class="font-semibold text-lg mb-2">Palindrome Checker</h3>
                    <p>A simple program to determine if a string is a palindrome.</p>
                </div>
                <div class="bg-white p-6 rounded-lg shadow-md">
                    <h3 class="font-semibold text-lg mb-2">Word Frequency Counter</h3>
                    <p>A utility to count occurrences of each unique word in a sentence.</p>
                </div>
                <div class="bg-white p-6 rounded-lg shadow-md">
                    <h3 class="font-semibold text-lg mb-2">Theory Cheatsheet</h3>
                    <p>A handy summary of key concepts and functions for C strings.</p>
                </div>
            </div>
        </section>

        <!-- File Breakdown Section -->
        <section>
            <h2 class="text-3xl font-bold text-slate-900 border-b-2 border-slate-300 pb-2 mb-8">📂 File Breakdown & Usage</h2>

            <!-- Card for basicPrograms.c -->
            <div class="bg-white rounded-xl shadow-lg p-8 mb-12 overflow-hidden">
                <h3 class="text-2xl font-bold mb-4">1. `basicPrograms.c`</h3>
                <p class="text-slate-600 mb-6">This file contains a suite of basic functions for common string manipulations.</p>
<pre class="code-block"><code class="language-c"><span class="code-preprocessor">#include &lt;stdio.h&gt;</span>
<span class="code-preprocessor">#include &lt;string.h&gt;</span>

<span class="code-type">void</span> <span class="code-function">printStr</span>(){
    <span class="code-type">char</span> name[100];
    <span class="code-function">printf</span>(<span class="code-string">"Enter a string:\n "</span>);
    <span class="code-function">fgets</span>(name, <span class="code-function">sizeof</span>(name), stdin);
    <span class="code-function">printf</span>(<span class="code-string">"%s"</span>, name);
}

<span class="code-type">void</span> <span class="code-function">reverseString</span>(<span class="code-type">char</span> src[]){
    <span class="code-type">int</span> rightPointer = <span class="code-function">strlen</span>(src) - 1;
    <span class="code-type">int</span> leftPointer = 0;
    <span class="code-keyword">while</span>(rightPointer >= leftPointer){
        <span class="code-type">char</span> temp = src[leftPointer];
        src[leftPointer] = src[rightPointer];
        src[rightPointer] = temp;
        leftPointer++;
        rightPointer--;
    }
    <span class="code-function">printf</span>(<span class="code-string">"Final reverse string is: %s"</span>, src);
}

<span class="code-comment">// ... other functions like findLen(), copy() ...</span>

<span class="code-type">int</span> <span class="code-function">main</span>(){
    <span class="code-comment">// Example usage for reverseString</span>
    <span class="code-type">char</span> testString[] = <span class="code-string">"hello world"</span>;
    <span class="code-function">reverseString</span>(testString);
    <span class="code-keyword">return</span> 0;
}
</code></pre>
                <div class="mt-6">
                    <h4 class="font-semibold text-lg mb-2">▶️ Input/Output Example (`reverseString`)</h4>
                    <div class="terminal-block">
                        <p class="terminal-output">Final reverse string is: dlrow olleh</p>
                    </div>
                </div>
            </div>

            <!-- Card for frequencyOfEachWord.c -->
            <div class="bg-white rounded-xl shadow-lg p-8 mb-12 overflow-hidden">
                <h3 class="text-2xl font-bold mb-4">2. `frequencyOfEachWord.c`</h3>
                <p class="text-slate-600 mb-6">A program that takes a sentence as input and outputs the frequency of each word.</p>
                <div class="mt-6">
                    <h4 class="font-semibold text-lg mb-2">▶️ Input/Output Example</h4>
                    <div class="terminal-block">
                        <p class="terminal-input">Enter the sentence: to be or not to be that is the question</p>
                        <br>
                        <p class="text-slate-400">Printing the results:</p>
                        <p class="terminal-output">to -> 2</p>
                        <p class="terminal-output">be -> 2</p>
                        <p class="terminal-output">or -> 1</p>
                        <p class="terminal-output">not -> 1</p>
                        <p class="terminal-output">that -> 1</p>
                        <p class="terminal-output">is -> 1</p>
                        <p class="terminal-output">the -> 1</p>
                        <p class="terminal-output">question -> 1</p>
                    </div>
                </div>
            </div>
            
            <!-- Card for palindromic.c -->
            <div class="bg-white rounded-xl shadow-lg p-8 mb-12 overflow-hidden">
                <h3 class="text-2xl font-bold mb-4">3. `palindromic.c`</h3>
                <p class="text-slate-600 mb-6">A simple and efficient program to check if a given string is a palindrome.</p>
                <div class="mt-6">
                    <h4 class="font-semibold text-lg mb-2">▶️ Input/Output Example</h4>
                    <div class="terminal-block">
                        <p class="terminal-input">Enter a string: madam</p>
                        <p class="terminal-output">madam is a palindromic string.</p>
                        <br>
                        <p class="terminal-input">Enter a string: hello</p>
                        <p class="terminal-output">hello is not a palindromic string.</p>
                    </div>
                </div>
            </div>

            <!-- Card for theory.txt -->
            <div class="bg-white rounded-xl shadow-lg p-8 mb-12 overflow-hidden">
                <h3 class="text-2xl font-bold mb-4">4. `theory.txt` - C String Cheatsheet 📝</h3>
                
                <div class="prose max-w-none prose-slate">
                    <blockquote class="border-l-4 border-blue-400 bg-blue-50 p-4 rounded-r-lg">
                        <p><strong>Note:</strong> <code>char words[100][50]</code> is used to store an array of up to 100 words, where each word can have a maximum length of 49 characters (plus the null terminator <code>\0</code>).</p>
                    </blockquote>

                    <h4 class="text-xl font-bold mt-6 mb-2">Ways to Declare Strings</h4>
                    <ol class="list-decimal list-inside space-y-2">
                        <li><strong>As a Character Array:</strong> (Modifiable)
                            <pre class="code-block mt-2"><code>char name[] = "Ahad";
// Stored as 'A', 'h', 'a', 'd', '\0'
// You can change it: name[0] = 'M'; results in "Mhad"</code></pre>
                        </li>
                        <li><strong>As a String Literal (Pointer):</strong> (Read-only)
                            <pre class="code-block mt-2"><code>char *name = "Ahad";
// Points to a constant string. Cannot be modified.</code></pre>
                        </li>
                    </ol>

                    <h4 class="text-xl font-bold mt-6 mb-2">Reading Strings</h4>
                    <ul class="list-disc list-inside space-y-2">
                        <li><code>fgets(name, sizeof(name), stdin)</code> is the recommended way.</li>
                        <li>It automatically adds <code>\0</code> and may include a trailing newline <code>\n</code>.</li>
                        <li><strong>To remove the trailing newline:</strong> <code>src[strcspn(src, "\n")] = '\0';</code></li>
                    </ul>

                    <h4 class="text-xl font-bold mt-6 mb-2">Key <code>&lt;string.h&gt;</code> Functions</h4>
                    <div class="overflow-x-auto">
                        <table class="w-full text-left border-collapse">
                            <thead class="bg-slate-200">
                                <tr>
                                    <th class="p-3 font-semibold text-sm border border-slate-300">Function</th>
                                    <th class="p-3 font-semibold text-sm border border-slate-300">Description</th>
                                </tr>
                            </thead>
                            <tbody class="align-baseline">
                                <tr>
                                    <td class="p-3 border border-slate-300 font-mono">strlen(s)</td>
                                    <td class="p-3 border border-slate-300">Returns the length of <code>s</code>, excluding <code>\0</code>.</td>
                                </tr>
                                <tr>
                                    <td class="p-3 border border-slate-300 font-mono">strcpy(dest, src)</td>
                                    <td class="p-3 border border-slate-300">Copies the <code>src</code> string into the <code>dest</code> variable.</td>
                                </tr>
                                 <tr>
                                    <td class="p-3 border border-slate-300 font-mono">strcat(s1, s2)</td>
                                    <td class="p-3 border border-slate-300">Concatenates <code>s2</code> onto the end of <code>s1</code>.</td>
                                </tr>
                                <tr>
                                    <td class="p-3 border border-slate-300 font-mono">strcmp(a, b)</td>
                                    <td class="p-3 border border-slate-300">Compares <code>a</code> and <code>b</code> lexicographically. Returns <code>0</code> if equal.</td>
                                </tr>
                                <tr>
                                    <td class="p-3 border border-slate-300 font-mono">strtok(str, delim)</td>
                                    <td class="p-3 border border-slate-300">Breaks <code>str</code> into tokens. Modifies the original string.</td>
                                </tr>
                            </tbody>
                        </table>
                    </div>
                </div>
            </div>

        </section>

        <!-- Footer -->
        <footer class="text-center mt-12 text-slate-500">
            <p>Happy Coding! 🎉</p>
        </footer>

    </div>
</body>
</html>
