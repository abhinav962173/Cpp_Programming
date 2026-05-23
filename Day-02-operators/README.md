<div align="center">

# 📘 Day 02 — Operators & Type Casting in C++

![C++](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Day](https://img.shields.io/badge/Day-02%20%2F%2060-ff6b35?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-00d4ff?style=for-the-badge)
![Author](https://img.shields.io/badge/Author-Abhinav-green?style=for-the-badge)

> **60 Days of C++ Challenge** — Operators are the verbs of programming. They make things happen.

</div>

---

## 🧠 What I Learned Today

C++ has a rich set of **operators** — from basic arithmetic to type manipulation. Today I covered every major operator type plus how C++ handles **type conversions** automatically and manually.

---

## 📁 Files

| # | File | Description |
|---|------|-------------|
| 01 | `arithmetic_operators.cpp` | `+`, `-`, `*`, `/`, `%` |
| 02 | `assignment_operators.cpp` | `=`, `+=`, `-=`, `*=`, `/=`, `%=` |
| 03 | `relational_operators.cpp` | `==`, `!=`, `>`, `<`, `>=`, `<=` |
| 04 | `logical_operators.cpp` | `&&`, `\|\|`, `!` |
| 05 | `constant.cpp` | `const` keyword — values that never change |
| 06 | `macros.cpp` | `#define` — compile-time constants |
| 07 | `explicit_type_casting.cpp` | Manual conversion: `(int)3.7` → `3` |
| 08 | `implicit_type_casting.cpp` | Auto conversion by compiler |
| 09 | `predict_output.cpp` | Predict output before running — sharpens logic |

---

## 💡 Syntax Reference

### 1️⃣ Arithmetic & Assignment
```cpp
int a = 10, b = 3;
cout << a % b;   // Output: 1

a += 5;          // a = a + 5
```

### 2️⃣ Relational & Logical
```cpp
cout << (a > b);               // Output: 1 (true)
cout << (5 > 3 && 100 > 90);   // Output: 1 (true)
```

### 3️⃣ Constants & Type Casting
```cpp
const float PI = 3.14159;
#define MAX 100

float x = 3.99;
int y = (int)x;    // Explicit → y = 3

int p = 5;
float q = p;       // Implicit → q = 5.0
```

---

## ✅ Challenges Completed

- [x] All arithmetic operators practiced
- [x] Assignment shorthand operators
- [x] Relational & logical operators
- [x] `const` vs `#define` difference understood
- [x] Explicit type casting
- [x] Implicit type casting
- [x] Output prediction exercise

---

<div align="center">

**Author:** Abhinav &nbsp;|&nbsp; **Tool:** VS Code &nbsp;|&nbsp; **Language:** C++17

🔥 **Day 2 / 60 Complete**

</div>
