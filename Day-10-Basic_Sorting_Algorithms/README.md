<div align="center">

# 📘 Day 10 — Basic Sorting Algorithms in C++

![C++](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Day](https://img.shields.io/badge/Day-10%20%2F%2060-ff6b35?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-00d4ff?style=for-the-badge)
![Author](https://img.shields.io/badge/Author-Abhinav-green?style=for-the-badge)

> **60 Days of C++ Challenge** — Sorting is one of the most fundamental operations in computer science. Every search, every database query, every leaderboard — sorting is behind it all.

</div>

---

## 🧠 What I Learned Today

Sorting means arranging elements in a specific order — ascending or descending. Today I covered **4 classic sorting algorithms** — Bubble Sort, Selection Sort, Insertion Sort, and Counting Sort — along with C++'s built-in `sort()` function.

Understanding these algorithms builds your intuition for time complexity, comparisons, and swaps — all essential for DSA interviews.

---

## 📁 Files

| # | File | Description |
|---|------|-------------|
| 01 | `sorting_algorithm.cpp` | Overview — sorting concept and comparison |
| 02 | `bubble_sort.cpp` | Bubble Sort — compare adjacent, swap if needed |
| 03 | `selection_sort.cpp` | Selection Sort — find minimum, place at correct position |
| 04 | `insertion_sort.cpp` | Insertion Sort — insert each element at correct position |
| 05 | `counting_sort.cpp` | Counting Sort — non-comparison based, O(n+k) |
| 06 | `in-built_sort_inc++.cpp` | C++ STL `sort()` function — ascending & descending |
| 07 | `practice_sorting.cpp` | Practice problems using sorting |
| 08 | `test.cpp` | Testing and experimenting with sorting |

---

## 🔑 Key Concepts

### 1️⃣ Why Sorting?

Before sorting, searching through data takes O(n) — you check every element. After sorting, you can use **Binary Search** — O(log n). Sorting also makes problems like finding duplicates, finding pairs with a given sum, and ranking much easier.

**Common use cases:**
- Search engines ranking results
- Leaderboards in games
- Database queries (ORDER BY)
- Finding duplicates, median, majority element

---

### 2️⃣ Bubble Sort

**Idea:** Compare adjacent elements. If they are in the wrong order, **swap** them. Repeat until no more swaps needed. The largest element "bubbles up" to the end in each pass.

```cpp
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {          // n-1 passes
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {  // last i elements already sorted
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;   // array already sorted — exit early!
    }
}

int main() {
    int arr[] = {5, 3, 8, 1, 9, 2};
    int n = 6;
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    // Output: 1 2 3 5 8 9
}
```

**Step-by-step trace for `{5, 3, 8, 1}`:**
```
Pass 1:
  Compare 5,3 → swap  → {3, 5, 8, 1}
  Compare 5,8 → ok    → {3, 5, 8, 1}
  Compare 8,1 → swap  → {3, 5, 1, 8}  ← 8 is at correct position

Pass 2:
  Compare 3,5 → ok    → {3, 5, 1, 8}
  Compare 5,1 → swap  → {3, 1, 5, 8}  ← 5 is at correct position

Pass 3:
  Compare 3,1 → swap  → {1, 3, 5, 8}  ← sorted! ✅
```

**Complexity:**

| Case | Time | Space |
|------|------|-------|
| Best (already sorted) | O(n) | O(1) |
| Average | O(n²) | O(1) |
| Worst (reverse sorted) | O(n²) | O(1) |

> 💡 The `swapped` flag is an **optimization** — if no swaps happen in a pass, the array is already sorted. Exit early instead of doing useless passes.

---

### 3️⃣ Selection Sort

**Idea:** In each pass, **find the minimum element** from the unsorted part and **place it at the correct position** (swap with the first unsorted element). Repeat for the rest.

```cpp
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;   // assume current position has minimum

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;   // found a smaller element
        }

        if (minIdx != i)
            swap(arr[i], arr[minIdx]);   // place minimum at position i
    }
}

int main() {
    int arr[] = {5, 3, 8, 1, 9, 2};
    int n = 6;
    selectionSort(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    // Output: 1 2 3 5 8 9
}
```

**Step-by-step trace for `{5, 3, 8, 1}`:**
```
Pass 1: min in [5,3,8,1] = 1 (index 3) → swap(arr[0], arr[3]) → {1, 3, 8, 5}
Pass 2: min in [3,8,5]   = 3 (index 1) → no swap needed       → {1, 3, 8, 5}
Pass 3: min in [8,5]     = 5 (index 3) → swap(arr[2], arr[3]) → {1, 3, 5, 8} ✅
```

**Complexity:**

| Case | Time | Space |
|------|------|-------|
| Best | O(n²) | O(1) |
| Average | O(n²) | O(1) |
| Worst | O(n²) | O(1) |

> ⚠️ Selection Sort always does **O(n²) comparisons** regardless of input — no early exit optimization possible. But it does minimum **swaps** — at most O(n) swaps total, making it useful when writes/swaps are expensive.

---

### 4️⃣ Insertion Sort

**Idea:** Build a sorted array **one element at a time**. Take each new element and **insert it into its correct position** among the already-sorted elements — like sorting playing cards in your hand.

```cpp
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];   // element to be inserted
        int j = i - 1;

        // shift elements greater than key one position to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;   // insert key at correct position
    }
}

int main() {
    int arr[] = {5, 3, 8, 1, 9, 2};
    int n = 6;
    insertionSort(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    // Output: 1 2 3 5 8 9
}
```

**Step-by-step trace for `{5, 3, 8, 1}`:**
```
i=1: key=3 → 5>3, shift → {5,5,8,1} → insert 3 → {3,5,8,1}
i=2: key=8 → 5<8, no shift           → insert 8 → {3,5,8,1}
i=3: key=1 → 8>1,5>1,3>1 shift all  → insert 1 → {1,3,5,8} ✅
```

**Complexity:**

| Case | Time | Space |
|------|------|-------|
| Best (already sorted) | O(n) | O(1) |
| Average | O(n²) | O(1) |
| Worst (reverse sorted) | O(n²) | O(1) |

> 💡 Insertion Sort is **best for nearly sorted arrays** — it runs in O(n) when only a few elements are out of place. That's why it's used in practice for small arrays inside hybrid algorithms like TimSort.

---

### 5️⃣ Counting Sort

**Idea:** Instead of comparing elements, **count how many times each value appears**, then reconstruct the sorted array from the counts. Works only for **non-negative integers** within a known range.

```cpp
#include <iostream>
using namespace std;

void countingSort(int arr[], int n) {
    // find maximum value
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > maxVal) maxVal = arr[i];

    // create count array of size maxVal+1, initialized to 0
    int count[maxVal + 1] = {0};

    // count frequency of each element
    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    // reconstruct sorted array
    int idx = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (count[i] > 0) {
            arr[idx++] = i;
            count[i]--;
        }
    }
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = 7;
    countingSort(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    // Output: 1 2 2 3 3 4 8
}
```

**Step-by-step for `{4, 2, 2, 8, 3, 3, 1}`:**
```
Count array:
index:  0  1  2  3  4  5  6  7  8
count:  0  1  2  2  1  0  0  0  1

Reconstruct: 1(×1), 2(×2), 3(×2), 4(×1), 8(×1)
Result: {1, 2, 2, 3, 3, 4, 8} ✅
```

**Complexity:**

| Case | Time | Space |
|------|------|-------|
| All cases | O(n + k) | O(k) |

where `k` = range of input values (max value)

> 💡 Counting Sort is **faster than O(n log n)** comparison sorts when `k` is small. Perfect for sorting marks (0–100), ages, etc.

> ⚠️ Not suitable when values are very large (like sorting 9-digit phone numbers — count array would need 1 billion slots!) or when values are negative/floating point.

---

### 6️⃣ C++ Built-in `sort()` Function

C++ STL provides a powerful built-in `sort()` in `<algorithm>` — uses **IntroSort** (hybrid of QuickSort + HeapSort + InsertionSort) with O(n log n) guaranteed.

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 1, 9, 2};
    int n = 6;

    // Sort ascending (default)
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    // Output: 1 2 3 5 8 9

    cout << endl;

    // Sort descending — use greater<int>() comparator
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    // Output: 9 8 5 3 2 1

    return 0;
}
```

**Sort a portion of array (from index 2 to 4):**
```cpp
sort(arr + 2, arr + 5);   // sorts indices 2, 3, 4 only
```

**Sort with custom comparator:**
```cpp
// Sort by absolute value
sort(arr, arr + n, [](int a, int b) {
    return abs(a) < abs(b);
});
```

> 💡 In competitive programming and interviews, **always use `sort()`** unless you're specifically asked to implement a sorting algorithm. It's fast, reliable, and O(n log n).

---

## 📊 Sorting Algorithms — Full Comparison

| Algorithm | Best | Average | Worst | Space | Stable? | When to use |
|-----------|------|---------|-------|-------|---------|-------------|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ Yes | Learning only |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | ❌ No | Min swaps needed |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ Yes | Small / nearly sorted arrays |
| Counting Sort | O(n+k) | O(n+k) | O(n+k) | O(k) | ✅ Yes | Small integer range |
| STL `sort()` | O(n log n) | O(n log n) | O(n log n) | O(log n) | ❌ No | General purpose — always preferred |

> 💡 **Stable sort** means equal elements maintain their **original relative order** after sorting. Important when sorting objects by one field while preserving order of another.

---

## 💡 Syntax Quick Reference

```cpp
// Bubble Sort — O(n²)
for (int i = 0; i < n-1; i++)
    for (int j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);

// Selection Sort — O(n²)
for (int i = 0; i < n-1; i++) {
    int minIdx = i;
    for (int j = i+1; j < n; j++)
        if (arr[j] < arr[minIdx]) minIdx = j;
    swap(arr[i], arr[minIdx]);
}

// Insertion Sort — O(n²)
for (int i = 1; i < n; i++) {
    int key = arr[i], j = i-1;
    while (j >= 0 && arr[j] > key) { arr[j+1] = arr[j]; j--; }
    arr[j+1] = key;
}

// STL sort — O(n log n)
sort(arr, arr + n);                    // ascending
sort(arr, arr + n, greater<int>());    // descending
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
g++ bubble_sort.cpp -o bubble
./bubble
```

---

## ✅ Challenges Completed

- [x] Sorting concept overview
- [x] Bubble Sort — with swapped flag optimization
- [x] Selection Sort — minimum swaps approach
- [x] Insertion Sort — shifting elements
- [x] Counting Sort — frequency array approach
- [x] C++ STL `sort()` — ascending and descending
- [x] Practice sorting problems
- [x] Compared all sorting algorithms

---

## 💡 Practice Tips

- Sort an array of strings alphabetically using `sort()`
- Implement **Bubble Sort** and count the number of swaps needed
- Given an array, check if it's already sorted in O(n)
- Sort an array of 0s, 1s, and 2s without using `sort()` — **Dutch National Flag problem**
- Find the **kth smallest element** using sorting
- Try sorting the same array with all 4 algorithms — observe which is fastest for nearly sorted input

---

<div align="center">

**Author:** Abhinav &nbsp;|&nbsp; **Tool:** VS Code &nbsp;|&nbsp; **Language:** C++17

🔥 **Day 10 / 60 Complete**

</div>
