<div align="center">

# 📘 Day 03 — Conditional Statements in C++

![C++](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Day](https://img.shields.io/badge/Day-03%20%2F%2060-ff6b35?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-00d4ff?style=for-the-badge)
![Author](https://img.shields.io/badge/Author-Abhinav-green?style=for-the-badge)

> **60 Days of C++ Challenge** — Learning conditional statements and decision-making in C++

</div>

---

## 🧠 What I Learned Today

Conditional statements allow a program to **make decisions** based on conditions at runtime. Today I explored all major conditional constructs available in C++.

---

## 📁 Files

| # | File | Description |
|---|------|-------------|
| 01 | `if-else_conditional.cpp` | Basic if-else branching |
| 02 | `else-if_conditional.cpp` | else-if ladder for multiple conditions |
| 03 | `switch_statement.cpp` | Switch-case for menu-driven logic |
| 04 | `ternary_operator.cpp` | Shorthand condition using `?:` |
| 05 | `check_odd-even.cpp` | Check if a number is odd or even |
| 06 | `largest_of_2_numbers.cpp` | Find largest among 2 numbers |
| 07 | `largest_of_3_numbers.cpp` | Find largest among 3 numbers |
| 08 | `income_tax_calculator.cpp` | Tax slab calculator using if-else |
| 09 | `calculator_using_switch.cpp` | Basic calculator using switch-case |

---

## 💡 Syntax Reference

### 1️⃣ if-else
```cpp
if (marks >= 90) {
    cout << "Grade A";
} else if (marks >= 75) {
    cout << "Grade B";
} else {
    cout << "Grade C";
}
```

### 2️⃣ Switch Statement
```cpp
switch (op) {
    case '+': cout << a + b; break;
    case '-': cout << a - b; break;
    case '*': cout << a * b; break;
    case '/': cout << a / b; break;
    default:  cout << "Invalid Operator";
}
```

### 3️⃣ Ternary Operator
```cpp
int max    = (a > b) ? a : b;
string res = (n % 2 == 0) ? "Even" : "Odd";
```

---

## ✅ Challenges Completed

- [x] Odd / Even Checker
- [x] Largest of 2 Numbers
- [x] Largest of 3 Numbers
- [x] Income Tax Calculator
- [x] Calculator using Switch-Case
- [x] All 4 conditional types practiced

---

## 🖥️ Sample Output

```
Enter Operator (+, -, *, /): /
a / b = 9

Enter the value of a: 10
Largest number is: 10
```

---

<div align="center">

**Author:** Abhinav &nbsp;|&nbsp; **Tool:** VS Code &nbsp;|&nbsp; **Language:** C++17

🔥 **Day 3 / 60 Complete**

</div>
