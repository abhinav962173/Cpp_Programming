<div align="center">

# 📘 Day 08 — Introduction to Pointers in C++

![C++](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Day](https://img.shields.io/badge/Day-08%20%2F%2060-ff6b35?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-00d4ff?style=for-the-badge)
![Author](https://img.shields.io/badge/Author-Abhinav-green?style=for-the-badge)

> **60 Days of C++ Challenge** — Pointers are what separate C++ from most languages. Master them and you truly understand how memory works.

</div>

---

## 🧠 What I Learned Today

Every variable you create in C++ is stored somewhere in your computer's memory — at a specific **memory address**. A **pointer** is a special variable that stores that memory address instead of a normal value.

Pointers are one of the most powerful — and most misunderstood — features of C++. They are the foundation of dynamic memory, arrays, data structures (linked lists, trees), and passing large data efficiently. Today I covered everything from basics to pass-by-value vs pass-by-reference.

---

## 📁 Files

| # | File | Description |
|---|------|-------------|
| 01 | `pointer.cpp` | What is a pointer — declaration and basic usage |
| 02 | `address_of_operator.cpp` | `&` operator — get memory address of a variable |
| 03 | `dereference.cpp` | `*` operator — access value at a pointer's address |
| 04 | `reference_variable.cpp` | Reference variables — alias for existing variables |
| 05 | `null_pointer.cpp` | `nullptr` — safe pointer initialization |
| 06 | `pass_by_value.cpp` | Passing arguments by value — original unchanged |
| 07 | `pass_by_reference_using_variables.cpp` | Pass by reference using `&` — original changes |
| 08 | `pass_by_reference_using_pointers.cpp` | Pass by reference using pointers — original changes |
| 09 | `predict_output1.cpp` | Output prediction — pointer basics |
| 10 | `predict_output2.cpp` | Output prediction — dereference |
| 11 | `predict_output3.cpp` | Output prediction — reference variables |
| 12 | `predict_output4.cpp` | Output prediction — pass by value vs reference |
| 13 | `predict_output5.cpp` | Output prediction — pointer arithmetic |
| 14 | `predict_output6.cpp` | Output prediction — mixed concepts |

---

## 🔑 Key Concepts

### 1️⃣ What is a Pointer?

A **pointer** is a variable that stores the **memory address** of another variable — not the value itself, but the location where the value lives.

Think of it like this:
- A normal variable is like a **house** — it stores a value (person living there)
- A pointer is like the **house address** — it tells you *where* the house is

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 20;           // normal variable — stores value 20
    int* ptr = &age;        // pointer — stores address of 'age'

    cout << age  << endl;   // Output: 20       (the value)
    cout << &age << endl;   // Output: 0x61ff08  (address of age)
    cout << ptr  << endl;   // Output: 0x61ff08  (same address stored in ptr)

    return 0;
}
```

**How to declare a pointer:**
```cpp
int*    ptr;   // pointer to int
float*  fptr;  // pointer to float
char*   cptr;  // pointer to char
double* dptr;  // pointer to double
```

> 💡 The `*` in declaration means "this is a pointer". The type before `*` tells what kind of variable the pointer points to.

---

### 2️⃣ Address-of Operator `&`

The `&` (ampersand) operator gives you the **memory address** of a variable. Every variable has a unique address in RAM.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';

    cout << "Value of a:   " << a  << endl;
    cout << "Address of a: " << &a << endl;   // e.g. 0x61ff0c
    cout << "Address of b: " << &b << endl;   // e.g. 0x61ff08
    cout << "Address of c: " << &c << endl;   // e.g. 0x61ff07

    return 0;
}
```

> 💡 Memory addresses are shown in **hexadecimal** (base 16) — like `0x61ff0c`. The exact address changes every time you run the program.

> ⚠️ Each data type takes different space:
> `char` = 1 byte, `int` = 4 bytes, `float` = 4 bytes, `double` = 8 bytes.
> That's why addresses of adjacent variables differ by their size.

---

### 3️⃣ Dereference Operator `*`

The `*` operator (when used with an existing pointer) **dereferences** it — meaning it goes to the address stored in the pointer and retrieves the **actual value** there.

```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 50;
    int* ptr = &num;    // ptr stores address of num

    cout << ptr  << endl;   // Output: address  (e.g. 0x61ff08)
    cout << *ptr << endl;   // Output: 50        (value AT that address)

    // You can also CHANGE the value using dereference
    *ptr = 100;
    cout << num  << endl;   // Output: 100  (num itself changed!)
    cout << *ptr << endl;   // Output: 100

    return 0;
}
```

**`&` vs `*` — Summary:**

| Operator | Name | Used for | Example |
|----------|------|----------|---------|
| `&` | Address-of | Get address of a variable | `&num` → `0x61ff08` |
| `*` (in declaration) | Pointer declaration | Declare a pointer | `int* ptr` |
| `*` (on pointer) | Dereference | Get value at address | `*ptr` → `50` |

> 💡 **Memory trick:** `&` gives address, `*` gives value. They are opposite operations — `*(&num)` = `num`.

---

### 4️⃣ Reference Variable

A **reference variable** is an **alias** — another name for the same variable. It's not a copy, it's the exact same memory location with a different name. Any change to the reference immediately changes the original.

```cpp
#include <iostream>
using namespace std;

int main() {
    int original = 10;
    int& ref = original;    // ref is an alias for original

    cout << original << endl;  // Output: 10
    cout << ref      << endl;  // Output: 10 (same value)

    ref = 99;   // changing ref changes original too!

    cout << original << endl;  // Output: 99
    cout << ref      << endl;  // Output: 99

    // Both have the SAME address
    cout << &original << endl;  // e.g. 0x61ff08
    cout << &ref      << endl;  // e.g. 0x61ff08  (identical!)

    return 0;
}
```

**Pointer vs Reference — Key Differences:**

| Feature | Pointer | Reference |
|---------|---------|-----------|
| Syntax | `int* ptr = &x` | `int& ref = x` |
| Can be null | ✅ Yes (`nullptr`) | ❌ No — must refer to something |
| Can be reassigned | ✅ Yes | ❌ No — fixed after initialization |
| Needs `*` to access value | ✅ Yes | ❌ No — used directly |
| Can do arithmetic | ✅ Yes | ❌ No |

> 💡 **When to use which?** Use **references** when you just want an alias (simpler syntax). Use **pointers** when you need null checks, reassignment, or pointer arithmetic.

---

### 5️⃣ Null Pointer

A **null pointer** is a pointer that doesn't point to any valid memory location. Always initialize pointers to `nullptr` if you don't have an address to assign yet — it prevents dangerous undefined behavior.

```cpp
#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr;   // safe — points to nothing

    if (ptr == nullptr) {
        cout << "Pointer is null — not pointing anywhere." << endl;
    }

    int x = 42;
    ptr = &x;   // now assign a valid address

    if (ptr != nullptr) {
        cout << "Value: " << *ptr << endl;  // Output: 42
    }

    return 0;
}
```

> ⚠️ **Never dereference a null pointer!** `*ptr` when `ptr = nullptr` causes a **segmentation fault** — your program crashes immediately. Always check `if (ptr != nullptr)` before dereferencing.

> ⚠️ **Dangling Pointer:** If a pointer still holds an address after the variable at that address is deleted/out of scope, it's a **dangling pointer** — dereferencing it gives garbage or crashes. Always set to `nullptr` after deleting.

---

### 6️⃣ Pass by Value

When you pass a variable to a function **by value**, the function gets a **copy** of the variable. Changes inside the function do NOT affect the original.

```cpp
#include <iostream>
using namespace std;

void addTen(int x) {    // x is a COPY
    x = x + 10;
    cout << "Inside function: " << x << endl;   // 20
}

int main() {
    int num = 10;
    addTen(num);
    cout << "After function:  " << num << endl;  // still 10!

    return 0;
}
```

```
Output:
Inside function: 20
After function:  10   ← original unchanged!
```

> 💡 Pass by value is **safe** — the original is never touched. But it's slower for large data because the entire value is copied.

---

### 7️⃣ Pass by Reference (using `&`)

When you pass by reference, the function gets the **actual variable** — not a copy. Changes inside the function directly affect the original.

```cpp
#include <iostream>
using namespace std;

void addTen(int& x) {   // x is a REFERENCE — same variable!
    x = x + 10;
    cout << "Inside function: " << x << endl;   // 20
}

int main() {
    int num = 10;
    addTen(num);
    cout << "After function:  " << num << endl;  // 20 — changed!

    return 0;
}
```

```
Output:
Inside function: 20
After function:  20   ← original IS changed!
```

**Classic use — swap two numbers:**
```cpp
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(x, y);
    cout << x << " " << y << endl;  // Output: 10 5
}
```

---

### 8️⃣ Pass by Reference (using Pointers)

You can also pass by reference using **pointers** — pass the address of the variable, and the function modifies the value at that address.

```cpp
#include <iostream>
using namespace std;

void addTen(int* ptr) {   // receives address
    *ptr = *ptr + 10;     // dereference to change actual value
    cout << "Inside function: " << *ptr << endl;  // 20
}

int main() {
    int num = 10;
    addTen(&num);          // pass address of num
    cout << "After function:  " << num << endl;   // 20 — changed!

    return 0;
}
```

**Pass by Value vs Reference vs Pointer — Final Comparison:**

| Method | Syntax | Original Changed? | Use When |
|--------|--------|-------------------|----------|
| Pass by Value | `void f(int x)` | ❌ No | Don't want to modify original |
| Pass by Reference | `void f(int& x)` | ✅ Yes | Want to modify, cleaner syntax |
| Pass by Pointer | `void f(int* x)` | ✅ Yes | Need null checks or pointer arithmetic |

---

## 💡 Syntax Quick Reference

```cpp
// Declare pointer
int* ptr;

// Assign address
ptr = &variable;

// Dereference (get value)
*ptr

// Reference variable
int& ref = original;

// Null pointer
int* ptr = nullptr;

// Pass by value
void func(int x) { ... }

// Pass by reference
void func(int& x) { ... }

// Pass by pointer
void func(int* x) { *x = 99; }
func(&variable);
```

---

## ▶️ How to Compile and Run

```bash
# Compile
g++ filename.cpp -o output

# Run (Windows)
output.exe

# Run (Linux/Mac)
./output
```

**Example:**
```bash
g++ pass_by_reference_using_pointers.cpp -o pbr
./pbr
```

---

## ✅ Challenges Completed

- [x] Pointer — declaration and usage
- [x] Address-of operator `&`
- [x] Dereference operator `*`
- [x] Reference variable — alias concept
- [x] Null pointer — `nullptr` safe initialization
- [x] Pass by value — original unchanged
- [x] Pass by reference using `&` — original changes
- [x] Pass by reference using pointers — original changes
- [x] Output prediction exercises (x6)

---

## 💡 Practice Tips

- Write a function `square(int* n)` that squares a number **in-place** using a pointer
- Write a **swap function** using pointers instead of references
- Try printing `ptr`, `*ptr`, `&ptr` for a pointer — understand all three values
- Check: what happens if you do `*ptr` when `ptr = nullptr`? (run in a safe environment)
- Write a program where you change a variable's value from inside a function — first with pass-by-value (observe it doesn't change), then with pass-by-reference (observe it does)

---

<div align="center">

**Author:** Abhinav &nbsp;|&nbsp; **Tool:** VS Code &nbsp;|&nbsp; **Language:** C++17

🔥 **Day 8 / 60 Complete**

</div>
