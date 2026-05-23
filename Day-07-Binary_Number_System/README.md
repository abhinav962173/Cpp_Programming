<div align="center">

# 📘 Day 07 — Binary Number System in C++

![C++](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Day](https://img.shields.io/badge/Day-07%20%2F%2060-ff6b35?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-00d4ff?style=for-the-badge)
![Author](https://img.shields.io/badge/Author-Abhinav-green?style=for-the-badge)

> **60 Days of C++ Challenge** — Computers don't understand 10, they understand 1010. Binary is the language of machines.

</div>

---

## 🧠 What I Learned Today

Every computer in the world — no matter how powerful — only understands **two things: 0 and 1**. This is called the **Binary Number System**. Everything you see on screen, every calculation your CPU does, every byte of memory — it all comes down to sequences of 0s and 1s.

Today I learned how binary works, how to convert numbers between binary and decimal (both manually and using code), common binary numbers, and how data type modifiers affect memory in C++.

---

## 📁 Topics Covered

| # | Topic | Type |
|---|-------|------|
| 01 | What is Binary Number System? | Theory |
| 02 | Convert Binary to Decimal | Theory + Math |
| 03 | Convert Decimal to Binary | Theory + Math |
| 04 | Question — Decimal to Binary | Practice |
| 05 | Common Numbers in Binary | Reference |
| 06 | Data Type Modifiers | Theory + C++ |
| 07 | Binary to Decimal (Code) | C++ Program |
| 08 | Decimal to Binary (Code) | C++ Program |

---

## 🔑 Key Concepts

### 1️⃣ What is the Binary Number System?

In our daily life, we use the **Decimal system** — base 10, using digits `0–9`.

Computers use the **Binary system** — base 2, using only digits `0` and `1`.

Why binary? Because computers are made of **transistors** — tiny electronic switches that are either **ON (1)** or **OFF (0)**. That's it. Everything else is built on top of this.

| System | Base | Digits Used | Example |
|--------|------|-------------|---------|
| Decimal | 10 | 0–9 | `42` |
| Binary | 2 | 0, 1 | `101010` |
| Octal | 8 | 0–7 | `52` |
| Hexadecimal | 16 | 0–9, A–F | `2A` |

> 💡 Each digit in a binary number is called a **bit** (Binary digIT).
> A group of 8 bits = **1 Byte**.

---

### 2️⃣ Convert Binary to Decimal

To convert binary → decimal, **multiply each bit by its positional power of 2** (starting from right, power = 0) and add them all up.

**Formula:**
```
Decimal = b₀×2⁰ + b₁×2¹ + b₂×2² + b₃×2³ + ...
(reading bits from RIGHT to LEFT)
```

**Example: Convert `1011` to Decimal**

```
Position:   3    2    1    0
Bits:       1    0    1    1

= 1×2³ + 0×2² + 1×2¹ + 1×2⁰
= 1×8  + 0×4  + 1×2  + 1×1
= 8    + 0    + 2    + 1
= 11
```

**More examples:**

| Binary | Calculation | Decimal |
|--------|-------------|---------|
| `0001` | 1×2⁰ | 1 |
| `0010` | 1×2¹ | 2 |
| `0101` | 1×2² + 1×2⁰ | 5 |
| `1000` | 1×2³ | 8 |
| `1111` | 8+4+2+1 | 15 |
| `10000` | 1×2⁴ | 16 |

> 💡 **Shortcut:** Powers of 2 from right → `1, 2, 4, 8, 16, 32, 64, 128...`
> Just add up the powers where bit = 1.

---

### 3️⃣ Convert Decimal to Binary

To convert decimal → binary, **repeatedly divide by 2** and note the remainders. Read the remainders **bottom to top**.

**Example: Convert `13` to Binary**

```
13 ÷ 2 = 6  remainder → 1  ↑ (read upward)
 6 ÷ 2 = 3  remainder → 0  ↑
 3 ÷ 2 = 1  remainder → 1  ↑
 1 ÷ 2 = 0  remainder → 1  ↑ (stop when quotient = 0)

Read remainders bottom to top → 1101
```

**Answer: 13 in binary = `1101`**

**Verify:** `1×2³ + 1×2² + 0×2¹ + 1×2⁰ = 8 + 4 + 0 + 1 = 13` ✅

**More examples:**

| Decimal | Binary |
|---------|--------|
| 5 | `0101` |
| 10 | `1010` |
| 15 | `1111` |
| 16 | `10000` |
| 25 | `11001` |
| 42 | `101010` |

> ⚠️ **Common Mistake:** Students often read remainders top to bottom — always read **bottom to top** for the correct binary result.

---

### 4️⃣ Common Numbers in Binary (Must Know!)

These are the most important binary values — memorize them as they appear frequently in DSA and interviews.

| Decimal | Binary | Power of 2? |
|---------|--------|-------------|
| 0 | `0000` | — |
| 1 | `0001` | 2⁰ |
| 2 | `0010` | 2¹ |
| 4 | `0100` | 2² |
| 8 | `1000` | 2³ |
| 16 | `10000` | 2⁴ |
| 32 | `100000` | 2⁵ |
| 64 | `1000000` | 2⁶ |
| 128 | `10000000` | 2⁷ |
| 255 | `11111111` | 2⁸ - 1 (max 8-bit value) |
| 256 | `100000000` | 2⁸ |
| 1024 | `10000000000` | 2¹⁰ (= 1 KB) |

> 💡 **Pattern:** Powers of 2 in binary always have exactly **one `1` followed by all `0`s**.
> `2⁴ = 16 = 10000` — one 1 and four 0s.

---

### 5️⃣ Data Type Modifiers

**Data type modifiers** change the size or range of a base data type. They let you control exactly how much memory a variable uses.

The four modifiers in C++ are: `short`, `long`, `signed`, `unsigned`

```cpp
#include <iostream>
using namespace std;

int main() {
    // short — uses less memory (2 bytes)
    short int a = 32767;          // max value for short

    // long — uses more memory (4 or 8 bytes)
    long int b = 2147483647;      // max value for long int

    // long long — even more (8 bytes)
    long long int c = 9223372036854775807;  // very large number

    // unsigned — only positive values, double the positive range
    unsigned int d = 4294967295;  // max for unsigned int (no negatives)

    // signed — default, can hold positive and negative
    signed int e = -100;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}
```

**Size and Range Reference:**

| Data Type | Size | Range |
|-----------|------|-------|
| `short int` | 2 bytes | -32,768 to 32,767 |
| `int` | 4 bytes | -2,147,483,648 to 2,147,483,647 |
| `unsigned int` | 4 bytes | 0 to 4,294,967,295 |
| `long int` | 4/8 bytes | depends on system |
| `long long int` | 8 bytes | -9.2×10¹⁸ to 9.2×10¹⁸ |
| `unsigned long long` | 8 bytes | 0 to 1.8×10¹⁹ |

> 💡 **Why `unsigned`?** If you know a value will never be negative (like age, array size, count), use `unsigned` — you get double the positive range for the same memory.

> ⚠️ **Overflow:** If you store a value larger than the type can hold, it **wraps around** to a wrong value. Always choose the right type for your data!

---

### 6️⃣ Binary to Decimal — C++ Code

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(long long binary) {
    int decimal = 0;
    int power = 0;

    while (binary != 0) {
        int lastBit = binary % 10;      // extract rightmost bit
        decimal += lastBit * pow(2, power);  // multiply by 2^position
        binary /= 10;                   // remove last bit
        power++;                        // move to next position
    }

    return decimal;
}

int main() {
    long long binary;
    cout << "Enter binary number: ";
    cin >> binary;

    cout << "Decimal: " << binaryToDecimal(binary) << endl;

    return 0;
}
```

**Step-by-step for input `1011`:**

| Step | binary | lastBit | power | decimal |
|------|--------|---------|-------|---------|
| 1 | 1011 | 1 | 0 | 0 + 1×1 = 1 |
| 2 | 101 | 1 | 1 | 1 + 1×2 = 3 |
| 3 | 10 | 0 | 2 | 3 + 0×4 = 3 |
| 4 | 1 | 1 | 3 | 3 + 1×8 = 11 |
| 5 | 0 | — | — | **Output: 11** ✅ |

---

### 7️⃣ Decimal to Binary — C++ Code

```cpp
#include <iostream>
using namespace std;

void decimalToBinary(int decimal) {
    if (decimal == 0) {
        cout << "0";
        return;
    }

    string binary = "";

    while (decimal > 0) {
        int remainder = decimal % 2;    // get remainder (0 or 1)
        binary = to_string(remainder) + binary;  // prepend to string
        decimal /= 2;                   // divide by 2
    }

    cout << "Binary: " << binary << endl;
}

int main() {
    int decimal;
    cout << "Enter decimal number: ";
    cin >> decimal;

    decimalToBinary(decimal);

    return 0;
}
```

**Step-by-step for input `13`:**

| Step | decimal | remainder | binary (built) |
|------|---------|-----------|----------------|
| 1 | 13 | 1 | `"1"` |
| 2 | 6 | 0 | `"01"` |
| 3 | 3 | 1 | `"101"` |
| 4 | 1 | 1 | `"1101"` |
| 5 | 0 | — | **Output: `1101`** ✅ |

---

## 💡 Conversion Quick Reference

```
Binary → Decimal:
  Multiply each bit by 2^position (right to left), then add.
  1011 = 1×8 + 0×4 + 1×2 + 1×1 = 11

Decimal → Binary:
  Divide by 2 repeatedly, read remainders bottom to top.
  13 → remainders: 1,0,1,1 → read upward = 1101

Powers of 2 (must memorize):
  2⁰=1, 2¹=2, 2²=4, 2³=8, 2⁴=16, 2⁵=32,
  2⁶=64, 2⁷=128, 2⁸=256, 2¹⁰=1024
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
g++ binary_to_decimal.cpp -o btd
./btd
```

---

## ✅ Challenges Completed

- [x] Understood what Binary Number System is
- [x] Binary to Decimal conversion — manual method
- [x] Decimal to Binary conversion — manual method
- [x] Practice question on Decimal to Binary
- [x] Memorized common binary numbers (powers of 2)
- [x] Data Type Modifiers — `short`, `long`, `long long`, `unsigned`, `signed`
- [x] Binary to Decimal — C++ program
- [x] Decimal to Binary — C++ program

---

## 💡 Practice Tips

- Manually convert these without calculator: `25`, `63`, `100`, `255`
- Verify your answer by converting back — if `25 → 11001`, check `11001 → 25`
- Try: what is the **maximum value** storable in 4 bits? In 8 bits?
- Write a program that checks if a decimal number is a **power of 2** using binary logic
- Remember: `255 = 11111111` — all 8 bits ON — this is the max value of 1 byte!

---

<div align="center">

**Author:** Abhinav &nbsp;|&nbsp; **Tool:** VS Code &nbsp;|&nbsp; **Language:** C++17

🔥 **Day 7 / 60 Complete**

</div>
