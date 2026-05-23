<div align="center">

# 📘 Day 05 — Pattern Printing in C++

![C++](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Day](https://img.shields.io/badge/Day-05%20%2F%2060-ff6b35?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-00d4ff?style=for-the-badge)
![Author](https://img.shields.io/badge/Author-Abhinav-green?style=for-the-badge)

> **60 Days of C++ Challenge** — Patterns are the gym for your loop logic. If you can print any pattern, you truly understand loops.

</div>

---

## 🧠 What I Learned Today

Pattern printing is one of the **best exercises** for mastering nested loops. Every pattern requires you to think in terms of **rows and columns** — the outer loop controls rows, the inner loop controls what gets printed in each row.

Today I built 13+ different patterns — from basic stars and pyramids to advanced shapes like diamonds, butterflies, rhombuses, and palindromic patterns. Mastering these means your **nested loop logic is solid**.

---

## 📁 Files

| # | File | Description |
|---|------|-------------|
| 01 | `nested_loops.cpp` | Introduction to nested loops — rows & columns concept |
| 02 | `print_star_pattern.cpp` | Simple solid square/rectangle of stars |
| 03 | `print_half_pyramid_pattern.cpp` | Right-aligned half pyramid of stars |
| 04 | `print_inverted_star_pattern.cpp` | Inverted half pyramid of stars |
| 05 | `print_inverted_and_rotated_half_pyramid.cpp` | Inverted + rotated pyramid variant |
| 06 | `print_character_pyramid_pattern.cpp` | Pyramid using characters (A, B, C...) |
| 07 | `print_0_1_triangle_pattern.cpp` | Triangle using alternating 0s and 1s |
| 08 | `print_floyds_triangle.cpp` | Floyd's Triangle — sequential numbers in rows |
| 09 | `print_hello_rectangle_pattern.cpp` | Rectangle pattern with "HELLO" or border stars |
| 10 | `print_diamond_pattern.cpp` | Full diamond shape using stars |
| 11 | `print_butterfly_pattern.cpp` | Butterfly pattern using stars |
| 12 | `print_rhombus_pattern.cpp` | Rhombus / parallelogram pattern |
| 13 | `print_palindromic_pattern.cpp` | Palindromic number triangle pattern |

---

## 🔑 Key Concepts

### 1️⃣ Nested Loops — The Foundation of Patterns

Every pattern is built using **two loops** — one inside the other:
- **Outer loop** → controls the number of **rows**
- **Inner loop** → controls what is printed in **each row** (columns)

```cpp
for (int i = 1; i <= n; i++) {       // row loop
    for (int j = 1; j <= n; j++) {   // column loop
        cout << "* ";
    }
    cout << endl;   // move to next row after each row is done
}
```

> 💡 **Golden Rule:** Always put `cout << endl` (or `"\n"`) **outside** the inner loop and **inside** the outer loop. This moves to the next line after each row is complete.

---

### 2️⃣ Star Pattern (Solid Square)

The simplest pattern — a solid rectangle of stars. Both loops run from 1 to n.

```cpp
int n = 4;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

**Output (n=4):**
```
* * * *
* * * *
* * * *
* * * *
```

---

### 3️⃣ Half Pyramid Pattern

In a half pyramid, **row `i` has `i` stars**. So the inner loop runs from 1 to `i` (not n).

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {   // j goes up to i, not n
        cout << "* ";
    }
    cout << endl;
}
```

**Output (n=5):**
```
*
* *
* * *
* * * *
* * * * *
```

---

### 4️⃣ Inverted Half Pyramid

In an inverted pyramid, **row `i` has `(n - i + 1)` stars** — starts full, decreases each row.

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i + 1; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

**Output (n=5):**
```
* * * * *
* * * *
* * *
* *
*
```

---

### 5️⃣ Character Pyramid Pattern

Instead of stars, print **characters** (A, B, C...) based on row or column number. Add `'A'` to the index to get the character.

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << (char)('A' + j - 1) << " ";
    }
    cout << endl;
}
```

**Output (n=5):**
```
A
A B
A B C
A B C D
A B C D E
```

> 💡 `(char)('A' + 0)` = `'A'`, `(char)('A' + 1)` = `'B'`, and so on. ASCII value of `'A'` is 65.

---

### 6️⃣ 0-1 Triangle Pattern

Print a triangle where positions alternate between 0 and 1. A position is 1 if `(i + j)` is even, else 0.

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        if ((i + j) % 2 == 0)
            cout << "1 ";
        else
            cout << "0 ";
    }
    cout << endl;
}
```

**Output (n=5):**
```
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
```

---

### 7️⃣ Floyd's Triangle

Floyd's triangle fills rows with **sequential numbers** — just keep a counter that increments every cell.

```cpp
int n = 5, count = 1;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << count << " ";
        count++;
    }
    cout << endl;
}
```

**Output (n=5):**
```
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
```

---

### 8️⃣ Diamond Pattern

A diamond = **upper half pyramid** (increasing) + **lower half pyramid** (decreasing). Use spaces to center-align the stars.

```cpp
int n = 5;

// Upper half
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) cout << " ";   // spaces
    for (int j = 1; j <= 2 * i - 1; j++) cout << "*"; // stars
    cout << endl;
}

// Lower half
for (int i = n - 1; i >= 1; i--) {
    for (int j = 1; j <= n - i; j++) cout << " ";   // spaces
    for (int j = 1; j <= 2 * i - 1; j++) cout << "*"; // stars
    cout << endl;
}
```

**Output (n=5):**
```
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
```

> 💡 **Key formula:** Stars in row `i` = `2 * i - 1`. Spaces before = `n - i`. This keeps everything centered.

---

### 9️⃣ Butterfly Pattern

A butterfly has two wings — left wing grows, right wing shrinks in upper half; reversed in lower half.

```cpp
int n = 5;

// Upper half
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) cout << "*";          // left wing
    for (int j = 1; j <= 2 * (n - i); j++) cout << " "; // spaces
    for (int j = 1; j <= i; j++) cout << "*";          // right wing
    cout << endl;
}

// Lower half
for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) cout << "*";
    for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
}
```

**Output (n=5):**
```
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
```

---

### 🔟 Rhombus Pattern

A rhombus is a slanted rectangle — each row starts with decreasing spaces, then prints `n` stars.

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) cout << " ";  // leading spaces
    for (int j = 1; j <= n; j++) cout << "* ";     // stars
    cout << endl;
}
```

**Output (n=5):**
```
* * * * *
 * * * * *
  * * * * *
   * * * * *
    * * * * *
```

---

### 1️⃣1️⃣ Palindromic Pattern

Each row prints numbers going up to `i` then back down — creating a palindrome on each line.

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    // Print spaces
    for (int j = 1; j <= n - i; j++) cout << " ";
    // Print increasing
    for (int j = 1; j <= i; j++) cout << j;
    // Print decreasing (skip the middle)
    for (int j = i - 1; j >= 1; j--) cout << j;
    cout << endl;
}
```

**Output (n=5):**
```
    1
   121
  12321
 1234321
123454321
```

> 💡 This is the palindromic triangle you can see in the terminal output in the screenshot — `1`, `212`, `32123`, `4321234`, `54321234 5`

---

## 💡 Pattern Thinking Framework

When solving any new pattern, ask yourself these 3 questions:

```
1. How many ROWS? → outer loop runs n times

2. What is printed in each ROW?
   → spaces first? stars? numbers? characters?
   → how many of each based on row number i?

3. After each row → cout << endl
```

**Common formulas:**

| Pattern Element | Formula |
|----------------|---------|
| Stars increasing | `j <= i` |
| Stars decreasing | `j <= n - i + 1` |
| Stars in pyramid row | `2 * i - 1` |
| Spaces before pyramid | `n - i` |
| Total stars in diamond | `2 * n - 1` (max row) |

---

## 💡 Syntax Quick Reference

```cpp
// Solid square
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) cout << "* ";
    cout << endl;
}

// Half pyramid
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) cout << "* ";
    cout << endl;
}

// Inverted pyramid
for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) cout << "* ";
    cout << endl;
}

// Character using ASCII
cout << (char)('A' + j - 1);
```

---

## ▶️ How to Compile and Run

```bash
# Compile
g++ filename.cpp -o output

# Run (Linux/Mac)
./output

# Run (Windows)
output.exe
```

**Example:**
```bash
g++ print_diamond_pattern.cpp -o diamond
./diamond
```

---

## ✅ Challenges Completed

- [x] Nested loops concept
- [x] Solid star square/rectangle
- [x] Half pyramid pattern
- [x] Inverted half pyramid
- [x] Inverted and rotated half pyramid
- [x] Character pyramid (A, B, C...)
- [x] 0-1 triangle pattern
- [x] Floyd's triangle
- [x] Hello rectangle pattern
- [x] Diamond pattern
- [x] Butterfly pattern
- [x] Rhombus pattern
- [x] Palindromic number pattern

---

## 💡 Practice Tips

- Try to **draw the pattern on paper first** — mark rows and columns before coding
- For any pattern: figure out the **relationship between row number `i` and number of stars/spaces**
- Modify the diamond to print **hollow diamond** (only border stars, spaces inside)
- Try printing a **number pyramid** instead of star pyramid
- Challenge: Print a **Christmas tree pattern** using nested loops

---

<div align="center">

**Author:** Abhinav &nbsp;|&nbsp; **Tool:** VS Code &nbsp;|&nbsp; **Language:** C++17

🔥 **Day 5 / 60 Complete**

</div>
