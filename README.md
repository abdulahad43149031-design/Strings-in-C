C String Manipulation Playground 🚀

Welcome to the C String Manipulation Playground! This repository is a collection of C programs designed to demonstrate and practice fundamental string operations. Whether you're learning about string handling in C or looking for a quick reference, you'll find useful examples here.

✨ Features

Basic Operations: Essential string functions like finding length, copying, and reversing.

Palindrome Checker: A simple program to determine if a string is a palindrome.

Word Frequency Counter: A utility to count the occurrences of each unique word in a sentence.

Theory Cheatsheet: A handy text file summarizing key concepts and functions for string manipulation in C.

📂 File Breakdown & Usage

Here's a closer look at each file in the repository.

1. basicPrograms.c

This file contains a suite of basic functions for common string manipulations.

▶️ Input/Output Example (for reverseString)

Let's say you modify the main function to call reverseString("hello world"):

// Inside main()
char myString[] = "hello world";
reverseString(myString);


💻 Output:

Final reverse string is: dlrow olleh


2. frequencyOfEachWord.c

A program that takes a sentence as input and outputs the frequency of each word.

▶️ Input/Output Example

⌨️ Input:

Enter the sentence: to be or not to be that is the question


💻 Output:

Printing the results: 
to -> 2
be -> 2
or -> 1
not -> 1
that -> 1
is -> 1
the -> 1
question -> 1


3. palindromic.c

A simple and efficient program to check if a given string is a palindrome.

▶️ Input/Output Example 1 (Is a Palindrome)

⌨️ Input:

Enter a string:
madam


💻 Output:

madam is a palindromic string.


▶️ Input/Output Example 2 (Is NOT a Palindrome)

⌨️ Input:

Enter a string:
hello


💻 Output:

hello is not a palindromic string.


4. theory.txt - C String Cheatsheet 📝

This file contains essential notes and quick facts about handling strings in C.

Note: char words[100][50] is used to store an array of up to 100 words, where each word can have a maximum length of 49 characters (plus the null terminator \0).

Ways to Declare Strings

As a Character Array: (Modifiable)

char name[] = "Ahad"; 
// Stored as 'A', 'h', 'a', 'd', '\0'
// You can change it: name[0] = 'M'; results in "Mhad"


As a String Literal (Pointer): (Read-only)

char *name = "Ahad"; 
// Points to a constant string. Cannot be modified.


Reading Strings

fgets(name, sizeof(name), stdin) is the recommended way.

It automatically adds \0 at the end.

It includes the newline \n character if there is space.

To remove the trailing newline: src[strcspn(src, "\n")] = '\0';

Key <string.h> Functions

Function

Description

strlen(s)

Returns the length of s, excluding \0. (sizeof(s) includes \0).

strcpy(dest, src)

Copies the src string into the dest variable.

strcat(s1, s2)

Concatenates s2 onto the end of s1.

strcmp(a, b)

Compares a and b lexicographically. Returns 0 if equal, >0 if a > b, and <0 if a < b.

strchr(s, ch)

Returns a pointer to the first occurrence of ch in s.

strtok(str, delim)

Breaks str into a series of tokens using delim. It modifies the original string. To get subsequent tokens, the first argument must be NULL.

strtok Example:

// First call
token = strtok(str, " "); 

// Subsequent calls
token = strtok(NULL, " "); // Continues from where it left off


Happy Coding! 🎉
