<div align="center">

# 📘 Day 06 — Functions in C++

![C++](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Day](https://img.shields.io/badge/Day-06%20%2F%2060-ff6b35?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-00d4ff?style=for-the-badge)
![Author](https://img.shields.io/badge/Author-Abhinav-green?style=for-the-badge)

> **60 Days of C++ Challenge** — Functions are the building blocks of every program. Write once, use anywhere.

</div>

---

## 🧠 What I Learned Today

Until now, all code was written inside `main()`. But as programs grow bigger, putting everything in one place becomes messy and hard to manage. **Functions** solve this by letting you break your program into small, reusable, named blocks.

Today I covered everything about functions — how to define them, pass data into them, get data back, use function overloading, understand scope, and use forward declarations. I also solved real-world problems like factorial, prime, palindrome, and binomial coefficient using functions.

---

## 📁 Files

| # | File | Description |
|---|------|-------------|
| 01 | `function_basics.cpp` | What is a function — define, call, return |
| 02 | `function_parameters.cpp` | Passing values to functions using parameters |
| 03 | `function_scope.cpp` | Local vs global variables — scope rules |
| 04 | `function_overloading.cpp` | Same function name, different parameters |
| 05 | `forward_declaration.cpp` | Declare function before defining it |
| 06 | `check_odd_even.cpp` | Odd/even check using a function |
| 07 | `check_prime.cpp` | Prime number check using a function |
| 08 | `check_palindrome_number.cpp` | Palindrome check using a function |
| 09 | `calculate_sum_of_digits.cpp` | Sum of digits using a function |
| 10 | `print_factorial_of_number.cpp` | Factorial using a function |
| 11 | `find_binomial_coefficient.cpp` | nCr using factorial function |
| 12 | `print_largest_of_3_numbers.cpp` | Largest of 3 numbers using a function |
| 13 | `print_product_of_2_numbers.cpp` | Product of 2 numbers using a function |
| 14 | `print_all_prime_from_range_2_n.cpp` | Print all primes in range using a function |
| 15 | `print_character_that_occurs_after_charact.cpp` | Print next character in ASCII using a function |
| 16 | `algebric_formula_based_practice_questio.cpp` | Practice: algebraic formulas using functions |

---

## 🔑 Key Concepts

### 1️⃣ Function Basics

A **function** is a named block of code that performs a specific task. You define it once and can **call it as many times** as needed from anywhere in the program.

**Syntax:**
```cpp
returnType functionName(parameters) {
    // body
    return value;   // if returnType is not void
}
```

```cpp
#include <iostream>
using namespace std;

// Function DEFINITION
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);      // Function CALL
    cout << result << endl;      // Output: 8

    cout << add(10, 20) << endl; // Output: 30 — call again!

    return 0;
}
```

**Parts of a function:**

| Part | Meaning | Example |
|------|---------|---------|
| Return type | What type of value it gives back | `int`, `float`, `void` |
| Function name | What you call it by | `add`, `isEven` |
| Parameters | Input values it accepts | `int a, int b` |
| Body | The code that runs | `return a + b;` |
| Return statement | Value sent back to caller | `return result;` |

> 💡 If a function doesn't need to return anything, use `void` as the return type. No `return` statement needed.

```cpp
void greet() {
    cout << "Hello, Abhinav!" << endl;  // just prints, returns nothing
}
```

---

### 2️⃣ Function Parameters

**Parameters** are the inputs a function accepts. You pass values (called **arguments**) when calling the function.

```cpp
#include <iostream>
using namespace std;

// Two parameters: name and age
void introduce(string name, int age) {
    cout << "My name is " << name << " and I am " << age << " years old." << endl;
}

// Returns the larger of two numbers
int maxOf(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    introduce("Abhinav", 20);       // Output: My name is Abhinav and I am 20 years old.
    cout << maxOf(15, 27) << endl;  // Output: 27

    return 0;
}
```

**Default Parameters** — you can set a default value that is used if the caller doesn't pass one:
```cpp
void greet(string name = "User") {
    cout << "Hello, " << name << "!" << endl;
}

greet("Abhinav");   // Hello, Abhinav!
greet();            // Hello, User!  (default used)
```

> ⚠️ **Parameters vs Arguments:**
> - **Parameter** = variable in the function definition → `int a`
> - **Argument** = actual value passed when calling → `add(5, 3)`

---

### 3️⃣ Function Scope

**Scope** determines where a variable can be accessed. Variables declared inside a function are **local** — they only exist inside that function. Variables declared outside all functions are **global** — accessible everywhere.

```cpp
#include <iostream>
using namespace std;

int globalVar = 100;    // Global — accessible everywhere

void showScope() {
    int localVar = 50;  // Local — only inside this function
    cout << globalVar << endl;  // ✅ Can access global
    cout << localVar  << endl;  // ✅ Can access local
}

int main() {
    showScope();
    cout << globalVar << endl;  // ✅ Can access global
    // cout << localVar;        // ❌ ERROR — localVar doesn't exist here!

    return 0;
}
```

**Local vs Global — Key Differences:**

| Feature | Local Variable | Global Variable |
|---------|---------------|-----------------|
| Declared inside | Function body | Outside all functions |
| Accessible in | Only that function | Entire program |
| Lifetime | Created when function called, destroyed when it returns | Exists for entire program |
| Default value | ❌ Undefined (garbage) | ✅ 0 (auto-initialized) |

> ⚠️ **Avoid overusing global variables.** They can be changed from anywhere in the program, making bugs very hard to track. Prefer local variables and pass data through parameters.

---

### 4️⃣ Function Overloading

**Function overloading** means having **multiple functions with the same name** but **different parameters** (different type or number). The compiler automatically picks the right one based on what you pass.

```cpp
#include <iostream>
using namespace std;

// Same name 'add' — different parameter types
int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int add(int a, int b, int c) {   // 3 parameters
    return a + b + c;
}

int main() {
    cout << add(3, 4)         << endl;  // calls int version   → 7
    cout << add(1.5f, 2.5f)   << endl;  // calls float version → 4.0
    cout << add(1, 2, 3)      << endl;  // calls 3-param version → 6

    return 0;
}
```

> 💡 **How does the compiler decide?** It looks at the **number and type of arguments** you pass and matches the correct version. This is called **compile-time polymorphism**.

> ⚠️ You **cannot** overload based only on return type. `int f()` and `float f()` will cause an error — the compiler can't tell which to call.

---

### 5️⃣ Forward Declaration

Normally in C++, a function must be **defined before it is called**. But using a **forward declaration** (also called a **function prototype**), you can declare the function at the top and define it later.

```cpp
#include <iostream>
using namespace std;

// Forward declaration — just the signature, no body
int multiply(int a, int b);

int main() {
    cout << multiply(4, 5) << endl;  // ✅ Works — compiler knows it exists
    return 0;
}

// Actual definition comes after main
int multiply(int a, int b) {
    return a * b;
}
```

> 💡 **Why use forward declarations?** In large programs with many files, functions call each other in complex ways. Forward declarations let you organize code however you want without worrying about order.

**Syntax of forward declaration:**
```cpp
returnType functionName(paramType1, paramType2);  // no body, ends with ;
```

---

### 6️⃣ Palindrome Number Using Function

A number is a **palindrome** if it reads the same forwards and backwards. `121`, `1331`, `12321` are palindromes.

```cpp
#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

bool isPalindrome(int n) {
    return n == reverseNumber(n);
}

int main() {
    int num;
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a Palindrome" << endl;
    else
        cout << num << " is NOT a Palindrome" << endl;

    return 0;
}
```

**Test cases:**
| Input | Reversed | Palindrome? |
|-------|----------|-------------|
| 121 | 121 | ✅ Yes |
| 1331 | 1331 | ✅ Yes |
| 123 | 321 | ❌ No |
| 12321 | 12321 | ✅ Yes |

---

### 7️⃣ Binomial Coefficient (nCr)

The **binomial coefficient** `nCr` tells you how many ways you can choose `r` items from `n` items.

```
nCr = n! / (r! × (n-r)!)
```

```cpp
#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    long long fact = 1;
    for (int i = 2; i <= n; i++) fact *= i;
    return fact;
}

long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    cin >> n >> r;
    cout << "C(" << n << ", " << r << ") = " << nCr(n, r) << endl;
    return 0;
}
```

**Example:**
```
C(5, 2) = 5! / (2! × 3!) = 120 / (2 × 6) = 10
```

> 💡 This is a perfect example of **function reuse** — `factorial()` is written once and called 3 times inside `nCr()`.

---

### 8️⃣ Next Character in ASCII

Each character has an **ASCII value** — an integer code. `'A'` = 65, `'B'` = 66, etc. Adding 1 to a character gives the next one.

```cpp
#include <iostream>
using namespace std;

char nextChar(char c) {
    return (char)(c + 1);
}

int main() {
    char ch;
    cin >> ch;
    cout << "Character after " << ch << " is: " << nextChar(ch) << endl;
    return 0;
}
```

**Output examples:**
```
Input: A  →  Output: B
Input: z  →  Output: {   (ASCII after 'z' is '{')
Input: 4  →  Output: 5
```

> 💡 `char` in C++ is just a small integer (1 byte). Adding or subtracting works directly on its ASCII value.

---

## 💡 Syntax Quick Reference

```cpp
// Basic function
int add(int a, int b) { return a + b; }

// Void function (no return)
void print(string msg) { cout << msg; }

// Default parameter
void greet(string name = "User") { ... }

// Forward declaration
int multiply(int a, int b);

// Function overloading
int add(int a, int b) { ... }
float add(float a, float b) { ... }

// Calling a function
int result = add(3, 4);
greet("Abhinav");
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
g++ function_overloading.cpp -o overload
./overload
```

---

## ✅ Challenges Completed

- [x] Function basics — define, call, return
- [x] Function parameters and arguments
- [x] Default parameters
- [x] Function scope — local vs global variables
- [x] Function overloading
- [x] Forward declaration
- [x] Check odd / even using function
- [x] Check prime using function
- [x] Check palindrome number using function
- [x] Calculate sum of digits using function
- [x] Print factorial using function
- [x] Find binomial coefficient (nCr)
- [x] Print largest of 3 numbers using function
- [x] Print product of 2 numbers using function
- [x] Print all primes in range using function
- [x] Print next character using ASCII
- [x] Algebraic formula practice questions

---

## 💡 Practice Tips

- Write a function `isPerfect(int n)` — returns true if sum of divisors equals the number (e.g., `6 = 1+2+3`)
- Create an overloaded function `area()` — one for circle, one for rectangle, one for triangle
- Write a `power(base, exp)` function without using `pow()` from `<cmath>`
- Rewrite your Day 3 income tax calculator as a function `calculateTax(float income)`
- Try calling a function **before** defining it (without forward declaration) — observe the error, then fix it with a prototype

---

<div align="center">

**Author:** Abhinav &nbsp;|&nbsp; **Tool:** VS Code &nbsp;|&nbsp; **Language:** C++17

🔥 **Day 6 / 60 Complete**

</div>
