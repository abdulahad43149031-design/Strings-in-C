# C String Programs Repository

Welcome to this repository! It contains a collection of **C programs** focused on string operations, along with theory notes.

---

## 📁 Files in this Repository

<details>
<summary>1️⃣ basicPrograms.c</summary>

**Features:**
- Print a string
- Find the length of a string
- Copy a string
- Reverse a string

**Sample Input/Output:**

<pre>
Enter a string:
hello
Output:
hello
Length is = 5
Final reverse string is: olleh
</pre>

</details>

<details>
<summary>2️⃣ frequencyOfEachWord.c</summary>

**Features:**
- Count frequency of each word in a sentence

**Sample Input/Output:**

<pre>
Enter the sentence: hello world hello
Output:
hello -> 2
world -> 1
</pre>

</details>

<details>
<summary>3️⃣ palindromic.c</summary>

**Features:**
- Check if a string is palindromic

**Sample Input/Output:**

<pre>
Enter a string:
madam
Output:
madam is a palindromic string.
</pre>

</details>

<details>

<summary>2️⃣ arrangeAlphabets.c</summary>

**Features:**
- Arranges a given string in ascending order based on their ASCII values

**Sample Input/Output:**

<pre>
Enter the sentence: simpleeasylearning
Output: Final sorted string: aaeegiillmnnprssyy

</pre>

</details>

<details>



<summary>4️⃣ theory.txt</summary>

**Concepts Covered:**
1. `char name[]` vs `char *name`
2. Reading strings with `fgets()` and removing trailing `\n`
3. Common string functions in `<string.h>`:
   - `strlen`, `sizeof`, `strcpy`, `strcat`, `strcmp`, `strchr`, `strtok`
4. Tokenization example:
```c
token = strtok(str, " "); // first token
token = strtok(NULL, " "); // subsequent tokens


