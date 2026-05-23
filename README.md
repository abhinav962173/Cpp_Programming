<div align="center">

<<<<<<< HEAD
# 📘 Day 09 — Arrays in C++

![C++](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Day](https://img.shields.io/badge/Day-09%20%2F%2060-ff6b35?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-00d4ff?style=for-the-badge)
![Author](https://img.shields.io/badge/Author-Abhinav-green?style=for-the-badge)

> **60 Days of C++ Challenge** — Arrays are the foundation of every data structure. Master arrays, and DSA becomes 10x easier.
=======
# 🧠 DSA in C++

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge)
![Days](https://img.shields.io/badge/Days_Completed-2-orange?style=for-the-badge)
![GitHub](https://img.shields.io/badge/GitHub-abhinav962173-black?style=for-the-badge&logo=github)

**A structured day-by-day grind to master Data Structures & Algorithms using C++.**  
*One day. One topic. One step closer.*
>>>>>>> 09d9b0e5e2a0940b0928adc6b730b9cb9c267faf

</div>

---

<<<<<<< HEAD
## 🧠 What I Learned Today

Until now, storing 10 numbers meant creating 10 separate variables. An **array** lets you store multiple values of the **same type** in one contiguous block of memory — all under one name, accessed by index.

Today I covered everything about arrays — creation, searching, reversing, subarrays, Kadane's Algorithm, pointer arithmetic, and classic interview problems like Buy & Sell Stocks, Trapping Rainwater, Maximum Product Subarray, and Search in Rotated Sorted Array.

---

## 📁 Files

| # | File | Description |
|---|------|-------------|
| 01 | `creating_arrays.cpp` | Array declaration, initialization, indexing |
| 02 | `output_input.cpp` | Input & output of array using loops |
| 03 | `find_largest_in_array.cpp` | Find the largest element |
| 04 | `find_smallest_in_array.cpp` | Find the smallest element |
| 05 | `arrays_always_passed_by_reference.cpp` | Why arrays are passed by reference |
| 06 | `linear_search.cpp` | Linear search — O(n) |
| 07 | `binary_search.cpp` | Binary search — O(log n) |
| 08 | `reverse_an_array_with_extra_space.cpp` | Reverse using extra array |
| 09 | `reverse_an_array_without_extra_space.cpp` | Reverse in-place — two pointer |
| 10 | `subarray.cpp` | Print all subarrays |
| 11 | `max_sum_of_subarray.cpp` | Max subarray sum — brute force O(n²) |
| 12 | `max_sum_of_subarray_obtimized.cpp` | Max subarray sum — optimized |
| 13 | `max_subarray_sum_kadanes_algorithm.cpp` | Kadane's Algorithm — O(n) |
| 14 | `maximum_product_subarray.cpp` | Maximum product subarray |
| 15 | `best_time_to_buy_and_sell_stocks.cpp` | Buy & sell stocks for max profit |
| 16 | `trapping_rain_water.cpp` | Trapping rainwater problem |
| 17 | `contains_duplicate_problem.cpp` | Check if array has duplicate values |
| 18 | `search_in_rotated_sorted_array.cpp` | Binary search in rotated sorted array |
| 19 | `array_pointer.cpp` | Array name as pointer |
| 20 | `pointer_arithmetic.cpp` | ptr+i, *(ptr+i) — pointer math |
| 21 | `increment_&_decrement_array_pointer.cpp` | ptr++, ptr-- on arrays |
| 22 | `subtraction_of_array_pointer.cpp` | Pointer subtraction — distance between elements |
| 23 | `comparison_of_array_pointer.cpp` | Comparing pointers |

---

## 🔑 Key Concepts

### 1️⃣ Basics of Array

An **array** is a collection of elements of the **same data type** stored in **contiguous memory**. Instead of 5 separate variables, one array of size 5.

```
Memory layout of int arr[5] = {10, 20, 30, 40, 50}:

Index:    [0]   [1]   [2]   [3]   [4]
Value:     10    20    30    40    50
Address:  100   104   108   112   116   (each int = 4 bytes)
```

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    cout << arr[0] << endl;   // 10
    cout << arr[2] << endl;   // 30
    cout << arr[4] << endl;   // 50

    return 0;
}
```

**Ways to declare:**
```cpp
int arr[5];                      // uninitialized (garbage values)
int arr[5] = {1, 2, 3, 4, 5};   // fully initialized
int arr[] = {1, 2, 3, 4, 5};    // size auto-calculated = 5
int arr[5] = {0};                // all elements = 0
```

> ⚠️ **Index starts at 0!** Array of size `n` has valid indices `0` to `n-1`. Accessing `arr[n]` is **out of bounds** — undefined behavior (crash or garbage)!

> 💡 Array size is **fixed** at declaration. Cannot resize later. Use `vector` for dynamic sizing (covered later).

---

### 2️⃣ Input & Output of Array

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Input
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Output
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
=======
## 📌 About This Repo

This repository documents my **daily DSA practice in C++**.  
Every folder = one day of learning. Every file = one concept practiced.  
No shortcuts. Just consistent effort. 💪

---

## 📁 Repository Structure

```
DSA-in-Cpp/
│
├── 📂 Day-01-variable_and_data_types/
│   ├── variables_basics.cpp
│   ├── data_types.cpp
│   ├── input_output.cpp
│   └── ...
│
├── 📂 Day-02-operators/
│   ├── arithmetic_operators.cpp
│   ├── relational_operators.cpp
│   ├── type_casting.cpp
│   └── ...
│
└── README.md
>>>>>>> 09d9b0e5e2a0940b0928adc6b730b9cb9c267faf
```

---

<<<<<<< HEAD
### 3️⃣ Find Largest & Smallest

```cpp
int findLargest(int arr[], int n) {
    int largest = arr[0];        // start with first element, NOT 0
    for (int i = 1; i < n; i++)
        if (arr[i] > largest) largest = arr[i];
    return largest;
}

int findSmallest(int arr[], int n) {
    int smallest = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < smallest) smallest = arr[i];
    return smallest;
}
```

> 💡 Always initialize with `arr[0]`, not `0`. If all elements are negative like `{-5, -3, -8}`, starting with `0` gives the wrong answer!

---

### 4️⃣ Arrays are Always Passed by Reference

When you pass an array to a function, you pass the **address of the first element** — NOT a copy. Any change inside the function affects the original array.

```cpp
void doubleAll(int arr[], int n) {
    for (int i = 0; i < n; i++)
        arr[i] *= 2;    // modifies ORIGINAL array!
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    doubleAll(arr, 5);
    // arr is now {2, 4, 6, 8, 10}
}
```

> 💡 Use `const int arr[]` if you don't want the function to modify the array.

---

### 5️⃣ Linear Search — O(n)

Check each element one by one from left to right.

```cpp
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++)
        if (arr[i] == target) return i;
    return -1;
}
```

- Works on **unsorted** arrays
- Time: **O(n)** worst case, **O(1)** best case

---

### 6️⃣ Binary Search — O(log n)

Works only on **sorted arrays**. Repeatedly halves the search space.

```cpp
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;   // safe mid formula

        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
```

**Example — target = 7 in `{1, 3, 5, 7, 9, 11}`:**
```
Step 1: left=0, right=5 → mid=2 → arr[2]=5 < 7  → left=3
Step 2: left=3, right=5 → mid=4 → arr[4]=9 > 7  → right=3
Step 3: left=3, right=3 → mid=3 → arr[3]=7 == 7 → Found! ✅
```

| | Linear Search | Binary Search |
|--|--------------|---------------|
| Array sorted? | Not needed | Required |
| Time Complexity | O(n) | O(log n) |
| n = 1,000,000 | 1,000,000 steps | ~20 steps |

> ⚠️ Use `left + (right-left)/2` not `(left+right)/2` — prevents **integer overflow**.

---

### 7️⃣ Reverse an Array

**With extra space — O(n) space:**
```cpp
void reverseWithSpace(int arr[], int n) {
    int temp[n];
    for (int i = 0; i < n; i++)
        temp[i] = arr[n - 1 - i];
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}
```

**Without extra space (in-place) — O(1) space:**
```cpp
void reverseInPlace(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++; right--;
    }
}
```

**Trace for `{1, 2, 3, 4, 5}`:**
```
swap(arr[0], arr[4]) → {5, 2, 3, 4, 1}
swap(arr[1], arr[3]) → {5, 4, 3, 2, 1}
left >= right → stop ✅
```

---

### 8️⃣ Subarrays

A **subarray** is a contiguous portion of an array. For size `n`, total subarrays = `n*(n+1)/2`.

```cpp
void printSubarrays(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++)
                cout << arr[k] << " ";
            cout << endl;
        }
    }
}
```

**For `{1, 2, 3}`:**
```
[1]
[1, 2]
[1, 2, 3]
[2]
[2, 3]
[3]
```

---

### 9️⃣ Kadane's Algorithm — Max Subarray Sum O(n)

**Brute Force O(n²):**
```cpp
int maxSumBrute(int arr[], int n) {
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}
```

**Kadane's Algorithm O(n):**

Key idea: at every index, either **extend** the previous subarray or **start fresh** from current element.

```cpp
int kadane(int arr[], int n) {
    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < n; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << kadane(arr, 9) << endl;  // Output: 6 → subarray {4,-1,2,1}
}
```

**Step-by-step trace:**

| i | arr[i] | currentSum | maxSum |
|---|--------|------------|--------|
| 0 | -2 | -2 | -2 |
| 1 | 1 | max(1, -1)=1 | 1 |
| 2 | -3 | max(-3, -2)=-2 | 1 |
| 3 | 4 | max(4, 2)=4 | 4 |
| 4 | -1 | max(-1, 3)=3 | 4 |
| 5 | 2 | max(2, 5)=5 | 5 |
| 6 | 1 | max(1, 6)=**6** | **6** ✅ |

---

### 🔟 Maximum Product Subarray

Find the subarray with the **maximum product**. Tricky — negative × negative = positive!

```cpp
int maxProduct(int nums[], int n) {
    int maxProd = nums[0];
    int minProd = nums[0];
    int result  = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] < 0) swap(maxProd, minProd);  // negative flips min/max!

        maxProd = max(nums[i], maxProd * nums[i]);
        minProd = min(nums[i], minProd * nums[i]);
        result  = max(result, maxProd);
    }
    return result;
}

// {2, 3, -2, 4} → Output: 6  ({2, 3})
```

> 💡 Always track **both** max and min product — a large negative can flip to a large positive when multiplied by another negative!

---

### 1️⃣1️⃣ Best Time to Buy & Sell Stocks

Find the **maximum profit** from one buy + one sell (must buy before sell).

```cpp
int maxProfit(int prices[], int n) {
    int minPrice  = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        minPrice  = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }
    return maxProfit;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices, 6) << endl;  // Output: 5 (buy@1, sell@6)
}
```

**Trace for `{7, 1, 5, 3, 6, 4}`:**
```
i=1: price=1 → minPrice=1
i=2: price=5 → profit=5-1=4 → maxProfit=4
i=3: price=3 → profit=3-1=2 → maxProfit=4
i=4: price=6 → profit=6-1=5 → maxProfit=5 ✅
i=5: price=4 → profit=4-1=3 → maxProfit=5
```

> 💡 **Time: O(n), Space: O(1)** — single pass!

---

### 1️⃣2️⃣ Trapping Rainwater

Given wall heights, find total **water trapped** between walls.

**Key insight:** Water at index `i` = `min(maxLeft[i], maxRight[i]) - height[i]`

```cpp
int trapWater(int height[], int n) {
    int left[n], right[n];

    left[0] = height[0];
    for (int i = 1; i < n; i++)
        left[i] = max(left[i-1], height[i]);

    right[n-1] = height[n-1];
    for (int i = n-2; i >= 0; i--)
        right[i] = max(right[i+1], height[i]);

    int totalWater = 0;
    for (int i = 0; i < n; i++)
        totalWater += min(left[i], right[i]) - height[i];

    return totalWater;
}

// {0,1,0,2,1,0,1,3,2,1,2,1} → Output: 6
```

---

### 1️⃣3️⃣ Contains Duplicate

Check if any value appears **at least twice**.

```cpp
#include <unordered_set>

bool containsDuplicate(int arr[], int n) {
    unordered_set<int> seen;
    for (int i = 0; i < n; i++) {
        if (seen.count(arr[i])) return true;
        seen.insert(arr[i]);
    }
    return false;
}
// {1, 2, 3, 1} → true
// {1, 2, 3, 4} → false
```

---

### 1️⃣4️⃣ Search in Rotated Sorted Array

Sorted array rotated at some pivot. Find target using modified binary search.

```
Original: {1, 3, 5, 7, 9}
Rotated:  {5, 7, 9, 1, 3}   ← rotated at index 2
```

```cpp
int searchRotated(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;

        if (arr[left] <= arr[mid]) {          // left half is sorted
            if (arr[left] <= target && target < arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        } else {                              // right half is sorted
            if (arr[mid] < target && target <= arr[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return -1;
}
```

---

### 1️⃣5️⃣ Array Pointer & Pointer Arithmetic

Array name = pointer to first element. Pointer arithmetic moves by **element size**, not 1 byte.

```cpp
int arr[] = {10, 20, 30, 40, 50};
int* ptr = arr;   // ptr = &arr[0]

cout << *ptr       << endl;   // 10
cout << *(ptr + 1) << endl;   // 20
cout << *(ptr + 2) << endl;   // 30

ptr++;             // move to next element
cout << *ptr;      // 20

// arr[i]  ==  *(arr + i)  ==  *(ptr + i)  — all identical!
```

**Address jump for int (4 bytes each):**
```
ptr+0 → address 100 → 10
ptr+1 → address 104 → 20
ptr+2 → address 108 → 30
```

**Pointer subtraction:**
```cpp
int* p1 = &arr[1];
int* p2 = &arr[4];
cout << p2 - p1;   // Output: 3  (3 elements apart)
```

---

## 💡 Syntax Quick Reference

```cpp
// Array declaration
int arr[5] = {1, 2, 3, 4, 5};

// Access — both are same
arr[i]  ==  *(arr + i)

// Safe binary search mid
int mid = left + (right - left) / 2;

// Kadane's
currentSum = max(arr[i], currentSum + arr[i]);
maxSum = max(maxSum, currentSum);

// Buy & Sell
minPrice  = min(minPrice, prices[i]);
maxProfit = max(maxProfit, prices[i] - minPrice);

// Pointer arithmetic
int* ptr = arr;
ptr++         // next element
ptr--         // previous element
p2 - p1       // elements between two pointers
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

---

## ✅ Challenges Completed

- [x] Creating arrays — declaration & initialization
- [x] Input & Output using loops
- [x] Find largest & smallest element
- [x] Arrays always passed by reference
- [x] Linear search — O(n)
- [x] Binary search — O(log n)
- [x] Reverse with extra space
- [x] Reverse without extra space (in-place)
- [x] Print all subarrays
- [x] Max sum subarray — brute force O(n²)
- [x] Max sum subarray — optimized
- [x] Kadane's Algorithm — O(n)
- [x] Maximum product subarray
- [x] Best time to buy & sell stocks
- [x] Trapping rainwater
- [x] Contains duplicate
- [x] Search in rotated sorted array
- [x] Array pointer
- [x] Pointer arithmetic (ptr+i, *(ptr+i))
- [x] Increment & decrement array pointer
- [x] Subtraction of array pointers
- [x] Comparison of array pointers

---

## 💡 Practice Tips

- Implement Kadane's and also **track start & end index** of max subarray
- Solve **Buy & Sell Stocks II** — multiple transactions allowed
- Try **Trapping Rainwater** with two-pointer approach (O(1) space)
- Write binary search **recursively**
- Find **second largest** in single pass O(n)
- Check if array is a **palindrome** using two pointers
=======
## 📅 Progress Tracker

| # | Topic | Status | Folder |
|---|-------|--------|--------|
| 01 | Variables & Data Types | ✅ Completed | [Day-01](./Day-01-variable_and_data_types) |
| 02 | Operators & Type Casting | ✅ Completed | [Day-02](./Day-02-operators) |
| 03 | Conditionals & Loops | 🔜 Coming Soon | — |
| 04 | Functions | 🔜 Coming Soon | — |
| 05 | Arrays & Strings | 🔜 Coming Soon | — |

---

## 🛠️ Tech Stack

| Tool | Details |
|------|---------|
| **Language** | C++ (C++17) |
| **IDE** | VS Code |
| **Compiler** | GCC / G++ |
| **OS** | Windows |

---

## 🎯 Goal

> Master DSA from scratch using C++ — one topic per day, every day.  
> This repo is my public commitment to consistency.

---

## 👨‍💻 Author

<div align="center">

**Abhinav**  
[![GitHub](https://img.shields.io/badge/GitHub-abhinav962173-black?style=flat-square&logo=github)](https://github.com/abhinav962173)

*"Consistency beats talent when talent doesn't show up."*

</div>
>>>>>>> 09d9b0e5e2a0940b0928adc6b730b9cb9c267faf

---

<div align="center">

<<<<<<< HEAD
**Author:** Abhinav &nbsp;|&nbsp; **Tool:** VS Code &nbsp;|&nbsp; **Language:** C++17

🔥 **Day 9 / 60 Complete**
=======
⭐ **Star this repo if it motivates you!** ⭐
>>>>>>> 09d9b0e5e2a0940b0928adc6b730b9cb9c267faf

</div>
