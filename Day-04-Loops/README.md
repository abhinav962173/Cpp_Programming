<div align="center">

# 📘 Day 04 — Loops in C++

![C++](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Day](https://img.shields.io/badge/Day-04%20%2F%2060-ff6b35?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-00d4ff?style=for-the-badge)
![Author](https://img.shields.io/badge/Author-Abhinav-green?style=for-the-badge)

> **60 Days of C++ Challenge** — Loops let your program do in one line what would otherwise take a thousand.

</div>

---

## 🧠 What I Learned Today

Imagine printing numbers from 1 to 1000 — writing 1000 `cout` lines is impossible. **Loops** solve this by repeating a block of code automatically until a condition is met.

Today I covered all three types of loops in C++ — `for`, `while`, and `do-while` — along with `break` and `continue` to control loop flow. I also solved real-world problems like factorial, Fibonacci series, prime numbers, Armstrong numbers, and digit manipulation using loops.

---

## 📁 Files

| # | File | Description |
|---|------|-------------|
| 01 | `for_loop.cpp` | Basic `for` loop — syntax and usage |
| 02 | `while_loop.cpp` | Basic `while` loop — condition-controlled repetition |
| 03 | `do_while_loop.cpp` | `do-while` loop — runs at least once |
| 04 | `break_statement.cpp` | `break` — exit a loop immediately |
| 05 | `continue_statement.cpp` | `continue` — skip current iteration, go to next |
| 06 | `print_name_5_times_for_loop.cpp` | Print a name 5 times using `for` loop |
| 07 | `print_number_from_1_n_for_loop.cpp` | Print numbers 1 to N using `for` loop |
| 08 | `print_numbers_from_n_1_for_loop.cpp` | Print numbers N to 1 (reverse) using `for` loop |
| 09 | `print_sum_of_n_natural_number_for_loo.cpp` | Sum of first N natural numbers |
| 10 | `print_table_of_a_number.cpp` | Multiplication table using loop |
| 11 | `print_square_pattern_for_loop.cpp` | Print square star pattern using nested loops |
| 12 | `find_factorial_of_number.cpp` | Calculate factorial: `n! = n × (n-1) × ... × 1` |
| 13 | `check_prime_number.cpp` | Check if a number is prime |
| 14 | `print_all_positive_prime_number_from_2.cpp` | Print all primes from 2 to N |
| 15 | `check_armstrong_of_3_digits_number.cpp` | Armstrong check for 3-digit numbers |
| 16 | `check_armstrong_of_n_digits_number.cpp` | Armstrong check for any N-digit number |
| 17 | `reverse_a_number_and_print_result.cpp` | Reverse digits of a number |
| 18 | `print_digits_of_number_in_reverse_while.cpp` | Print each digit in reverse using `while` |
| 19 | `print_sum_of_digits_of_number_while_lo.cpp` | Sum all digits of a number |
| 20 | `print_sum_of_odd_digits_of_number_whi.cpp` | Sum only odd digits of a number |
| 21 | `print_the_first_N_fibonacci_numbers.cpp` | Print Fibonacci series up to N terms |
| 22 | `practice_question_do_while_loop.cpp` | Practice: do-while loop problems |
| 23 | `practice_question_do_while_loop-2.cpp` | Practice: more do-while loop problems |

---

## 🔑 Key Concepts

### 1️⃣ `for` Loop

The `for` loop is used when you **know exactly how many times** you want to repeat something. It combines initialization, condition, and update — all in one line.

**Syntax:**
```cpp
for (initialization; condition; update) {
    // body — runs as long as condition is true
}
```

```cpp
#include <iostream>
using namespace std;

int main() {
    // Print 1 to 5
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";   // Output: 1 2 3 4 5
    }
    cout << endl;

    // Print 5 to 1 (reverse)
    for (int i = 5; i >= 1; i--) {
        cout << i << " ";   // Output: 5 4 3 2 1
    }

    return 0;
}
```

**How it works — step by step:**
```
Step 1: int i = 1       → initialize (runs ONCE)
Step 2: i <= 5 ?        → check condition
Step 3: run body        → cout << i
Step 4: i++             → update
Step 5: go back to Step 2 ... repeat until condition is false
```

> 💡 `i++` means increment by 1. You can also use `i += 2` to go by 2s, or `i *= 2` to double each time.

---

### 2️⃣ `while` Loop

The `while` loop is used when you **don't know in advance** how many times to repeat — you just keep going as long as a condition is true.

**Syntax:**
```cpp
while (condition) {
    // body
}
```

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 5) {
        cout << i << " ";   // Output: 1 2 3 4 5
        i++;                // ⚠️ Must update — or infinite loop!
    }

    return 0;
}
```

**Real-world use — reverse digits of a number:**
```cpp
int num = 1234, rev = 0;

while (num != 0) {
    int digit = num % 10;   // Get last digit
    rev = rev * 10 + digit; // Append to reversed number
    num /= 10;              // Remove last digit
}

cout << rev;   // Output: 4321
```

> ⚠️ **Always update the variable** inside a `while` loop. Forgetting `i++` creates an **infinite loop** that never stops!

---

### 3️⃣ `do-while` Loop

The `do-while` loop is like `while`, but with one key difference — the body runs **at least once**, even if the condition is false from the start. The condition is checked **after** the body executes.

**Syntax:**
```cpp
do {
    // body — runs at least once
} while (condition);
```

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    do {
        cout << i << " ";   // Output: 1 2 3 4 5
        i++;
    } while (i <= 5);

    // Even if condition is false from start, body runs once:
    int x = 10;
    do {
        cout << "This runs once!" << endl;  // ✅ Prints even though x > 5
    } while (x < 5);

    return 0;
}
```

> 💡 **When to use `do-while`?** Perfect for menus — show the menu first, then ask if the user wants to continue.

---

### 4️⃣ `break` Statement

`break` **immediately exits** the loop, no matter what the condition says. Execution jumps to the first line after the loop.

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;              // Stop loop when i reaches 5
        }
        cout << i << " ";       // Output: 1 2 3 4
    }
    cout << "\nLoop ended." << endl;

    return 0;
}
```

**Real-world use — find first even number:**
```cpp
for (int i = 1; i <= 20; i++) {
    if (i % 2 == 0) {
        cout << "First even: " << i << endl;  // Output: 2
        break;   // No need to continue after finding it
    }
}
```

---

### 5️⃣ `continue` Statement

`continue` **skips the rest of the current iteration** and jumps to the next one. Unlike `break`, it doesn't exit the loop — it just skips one round.

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;           // Skip even numbers
        }
        cout << i << " ";       // Output: 1 3 5 7 9 (only odd)
    }

    return 0;
}
```

**`break` vs `continue` — Key Difference:**

| | `break` | `continue` |
|--|---------|------------|
| What it does | **Exits** the loop completely | **Skips** current iteration only |
| Loop continues? | ❌ No | ✅ Yes |
| Use case | Stop when target found | Skip unwanted values |

---

### 6️⃣ Factorial

Factorial of N (`N!`) means multiplying all numbers from 1 to N.
```
5! = 5 × 4 × 3 × 2 × 1 = 120
```

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;      // fact = fact * i
    }

    cout << n << "! = " << fact << endl;
    return 0;
}
```

**Factorial values:**
| N | N! |
|---|----|
| 0 | 1 |
| 1 | 1 |
| 5 | 120 |
| 10 | 3,628,800 |
| 20 | 2,432,902,008,176,640,000 |

> 💡 Use `long long` instead of `int` for factorial — factorials grow **very fast** and overflow `int` quickly (beyond 12!).

---

### 7️⃣ Prime Number

A **prime number** is a number greater than 1 that is **divisible only by 1 and itself**.
Examples: `2, 3, 5, 7, 11, 13, 17, 19...`

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool isPrime = true;

    if (n <= 1) isPrime = false;

    for (int i = 2; i * i <= n; i++) {  // Check up to √n (efficient!)
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << n << " is Prime" << endl;
    else
        cout << n << " is NOT Prime" << endl;

    return 0;
}
```

> 💡 **Why check only up to `√n`?** If `n` has a factor larger than `√n`, it must also have one smaller than `√n`. So checking up to `√n` is enough — this makes the program much faster!

---

### 8️⃣ Fibonacci Series

The **Fibonacci series** is a sequence where each number is the **sum of the two before it**.
```
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 ...
F(n) = F(n-1) + F(n-2)
```

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, b = 1;

    cout << a << " " << b << " ";

    for (int i = 2; i < n; i++) {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }

    return 0;
}
```

**Output for N = 8:** `0 1 1 2 3 5 8 13`

---

### 9️⃣ Armstrong Number (N-digits)

A number is Armstrong if the **sum of each digit raised to the power of total digits equals the number**.

```
153  → 3 digits → 1³ + 5³ + 3³ = 153  ✅
1634 → 4 digits → 1⁴ + 6⁴ + 3⁴ + 4⁴ = 1634  ✅
```

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, sum = 0, digits = 0;
    cin >> num;
    original = num;

    // Count digits
    int temp = num;
    while (temp != 0) { digits++; temp /= 10; }

    // Calculate Armstrong sum
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong Number" << endl;
    else
        cout << original << " is NOT an Armstrong Number" << endl;

    return 0;
}
```

---

### 🔟 Sum / Reverse of Digits

```cpp
int num = 12345;
int sum = 0, rev = 0;

while (num != 0) {
    int digit = num % 10;   // Extract last digit
    sum += digit;           // Add to sum
    rev = rev * 10 + digit; // Build reversed number
    num /= 10;              // Remove last digit
}

cout << "Sum of digits: " << sum << endl;    // 15
cout << "Reversed number: " << rev << endl;  // 54321
```

**Step-by-step for `num = 123`:**
| Step | num | digit | sum | rev |
|------|-----|-------|-----|-----|
| 1 | 123 | 3 | 3 | 3 |
| 2 | 12 | 2 | 5 | 32 |
| 3 | 1 | 1 | 6 | 321 |
| 4 | 0 | — | — | done |

---

## 💡 Syntax Quick Reference

```cpp
// for loop
for (int i = 0; i < n; i++) { ... }

// while loop
while (condition) { ...; i++; }

// do-while loop
do { ... } while (condition);

// break — exit loop
if (i == 5) break;

// continue — skip iteration
if (i % 2 == 0) continue;

// factorial
long long fact = 1;
for (int i = 1; i <= n; i++) fact *= i;

// prime check (efficient)
for (int i = 2; i * i <= n; i++) { ... }

// digit extraction
while (num != 0) {
    int digit = num % 10;
    num /= 10;
}
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
g++ find_factorial_of_number.cpp -o factorial
./factorial
```

---

## ✅ Challenges Completed

- [x] `for` loop — forward and reverse
- [x] `while` loop
- [x] `do-while` loop
- [x] `break` statement
- [x] `continue` statement
- [x] Print name N times
- [x] Print numbers 1 to N and N to 1
- [x] Sum of N natural numbers
- [x] Multiplication table
- [x] Square star pattern
- [x] Factorial of a number
- [x] Check prime number
- [x] Print all primes from 2 to N
- [x] Armstrong number (3-digit)
- [x] Armstrong number (N-digit)
- [x] Reverse a number
- [x] Print digits in reverse
- [x] Sum of all digits
- [x] Sum of odd digits only
- [x] Fibonacci series (first N terms)
- [x] Practice do-while problems (x2)

---

## 💡 Practice Tips

- Print all **even numbers from 1 to 100** using `continue` (skip odd)
- Write a program that keeps asking for input **until user enters 0** — use `do-while`
- Find the **GCD of two numbers** using a loop
- Print a **right-angled triangle pattern** using nested `for` loops
- Check all numbers from 1 to 500 and print only **Armstrong numbers**
- Optimize your prime checker — make sure you're checking only up to `√n`

---

<div align="center">

**Author:** Abhinav &nbsp;|&nbsp; **Tool:** VS Code &nbsp;|&nbsp; **Language:** C++17

🔥 **Day 4 / 60 Complete**

</div>
