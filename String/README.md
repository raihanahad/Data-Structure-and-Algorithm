# String

This folder contains implementations of common string-related problems and different approaches to solve them. The problems included here cover important concepts such as string traversal, recursion, two pointers, frequency counting, character comparison, and alphabet tracking.

## Included Problems

---

## 1. Palindrome String

A string is called a **Palindrome** if it reads the same from both forward and backward directions.

### Examples

```text
madam → Palindrome
racecar → Palindrome
hello → Not Palindrome
```

### Approaches

#### 1. Reversing

In this approach, the original string is reversed and then compared with the original string.

* If both strings are the same, it is a palindrome.
* Otherwise, it is not a palindrome.

#### 2. Simple (Iterative)

The string is checked using a loop by comparing characters from the beginning with their corresponding characters from the end.

#### 3. Recursive

The first and last characters are compared recursively. If they are equal, the function continues checking the remaining substring.

#### 4. Two Pointers

Two pointers are used:

* One pointer starts from the beginning.
* Another pointer starts from the end.
* Both pointers move toward the center.
* If all corresponding characters match, the string is a palindrome.

### Complexity

| Approach           | Time Complexity | Space Complexity |
| ------------------ | --------------: | ---------------: |
| Reversing          |            O(N) |             O(N) |
| Simple (Iterative) |            O(N) |             O(1) |
| Recursive          |            O(N) |             O(N) |
| Two Pointers       |            O(N) |             O(1) |

---

## 2. Check Subsequence

A string is considered a **subsequence** of another string if all its characters appear in the same relative order, although they do not need to be consecutive.

### Examples

```text
String: abcde
Subsequence: ace → Yes

String: abcde
Subsequence: aec → No
```

### Approaches

#### 1. Iterative Approach

The iterative solution uses loops or pointers to traverse both strings.

* Compare characters of both strings.
* Move forward when matching characters are found.
* If all characters of the subsequence are matched, it is a valid subsequence.

#### 2. Recursive Approach

The recursive solution checks the strings step by step using recursive calls.

* Compare the current characters.
* If they match, move forward in both strings.
* Otherwise, continue searching in the main string.
* If all characters of the subsequence are matched, it is a valid subsequence.

### Complexity

| Approach  | Time Complexity | Space Complexity |
| --------- | --------------: | ---------------: |
| Iterative |            O(N) |             O(1) |
| Recursive |            O(N) |             O(N) |

---

## 3. First Non-Repeating Character

This problem finds the first character in a string that appears only once.

### Example

```text
String: aabbcdde
First Non-Repeating Character: c
```

### Approach

* Count the frequency of each character.
* Traverse the string again.
* Find the first character whose frequency is equal to `1`.

**Time Complexity:** O(N)
**Space Complexity:** O(N)

---

## 4. Pangram Checking

A **Pangram** is a string or sentence that contains every letter of the English alphabet at least once.

### Example

```text
The quick brown fox jumps over the lazy dog
```

This sentence is a Pangram because it contains all **26 English letters**.

### Approach

* Traverse the string.
* Track the occurrence of each alphabet character.
* Check whether all 26 English letters are present.

**Time Complexity:** O(N)
**Space Complexity:** O(1)

---

## 5. Same String

This problem checks whether two strings are exactly the same.

Two strings are considered the same if:

* Their lengths are equal.
* Every corresponding character is equal.

### Examples

```text
"hello" and "hello" → Same

"Hello" and "hello" → Not Same
```

### Approach

* Compare the lengths of both strings.
* Compare characters at the same positions.
* If every character matches, both strings are the same.

**Time Complexity:** O(N)
**Space Complexity:** O(1)

---

## Summary

| Problem                       | Approach             | Main Concept        |
| ----------------------------- | -------------------- | ------------------- |
| Palindrome String             | Reversing            | String Reversal     |
| Palindrome String             | Simple (Iterative)   | Iteration           |
| Palindrome String             | Recursive            | Recursion           |
| Palindrome String             | Two Pointers         | Two Pointers        |
| Check Subsequence             | Iterative            | String Traversal    |
| Check Subsequence             | Recursive            | Recursion           |
| First Non-Repeating Character | Frequency Counting   | Character Frequency |
| Pangram Checking              | Character Tracking   | Alphabet Checking   |
| Same String                   | Character Comparison | String Comparison   |

> These problems demonstrate different techniques for solving string-related problems, including iteration, recursion, two pointers, reversing, frequency counting, and character tracking.
