# Basic Sorting Algorithms

This section covers three fundamental sorting algorithms:

1. **Bubble Sort**
2. **Selection Sort**
3. **Insertion Sort**

These algorithms are simple to understand and are useful for building a strong foundation in sorting and algorithmic problem solving.

---

## 1. Bubble Sort

Bubble Sort repeatedly compares **adjacent elements** and swaps them if they are in the wrong order.

### How It Works

* Compare two adjacent elements.
* Swap them if the left element is greater than the right element.
* Continue this process until the largest element moves to the end.
* Repeat for the remaining unsorted part.
* After each pass, one element reaches its correct position.

### Complexity

* **Best Case:** O(N) — when the array is already sorted and an optimized version is used.
* **Average Case:** O(N²)
* **Worst Case:** O(N²)
* **Auxiliary Space:** O(1)

### Advantages

* Very simple to understand and implement.
* Requires no extra array.
* Works well for small datasets.
* Can detect an already sorted array with optimization.

### Drawbacks

* Very slow for large datasets.
* Requires many comparisons and swaps.
* O(N²) average and worst-case time complexity.

### When to Use

* Small datasets.
* Learning the basic idea of sorting.
* Situations where simplicity is more important than performance.

---

## 2. Selection Sort

Selection Sort divides the array into a **sorted part** and an **unsorted part**. It repeatedly finds the smallest element from the unsorted part and places it at the beginning.

### How It Works

* Start from the first position.
* Find the minimum element in the unsorted portion.
* Swap it with the first unsorted element.
* Move to the next position.
* Repeat until the entire array is sorted.

### Complexity

* **Best Case:** O(N²)
* **Average Case:** O(N²)
* **Worst Case:** O(N²)
* **Auxiliary Space:** O(1)

### Advantages

* Simple and easy to implement.
* Requires very few swaps compared to Bubble Sort.
* Works without using extra memory.
* Useful when the cost of swapping is relatively high.

### Drawbacks

* Always performs O(N²) comparisons.
* Not efficient for large datasets.
* Does not take advantage of an already sorted array.

### When to Use

* Small datasets.
* When minimizing the number of swaps is important.
* When simple in-place sorting is needed.

---

## 3. Insertion Sort

Insertion Sort builds the sorted array **one element at a time**. Each new element is placed into its correct position within the already sorted portion.

### How It Works

* Consider the first element as sorted.
* Take the next element as the `key`.
* Compare it with elements in the sorted portion.
* Shift larger elements one position to the right.
* Insert the key into its correct position.
* Repeat until all elements are sorted.

### Complexity

* **Best Case:** O(N) — when the array is already sorted.
* **Average Case:** O(N²)
* **Worst Case:** O(N²)
* **Auxiliary Space:** O(1)

### Advantages

* Simple and easy to implement.
* Performs very well on small datasets.
* Efficient for nearly sorted arrays.
* Requires only O(1) extra space.
* Stable sorting algorithm.

### Drawbacks

* Slow for large, randomly ordered datasets.
* Average and worst-case time complexity is O(N²).
* Requires many shifts when elements are far from their correct positions.

### When to Use

* Small datasets.
* Nearly sorted arrays.
* When a simple and stable sorting algorithm is needed.
* When an in-place sorting algorithm is preferred.

---

## Quick Comparison

| Algorithm          | Best Case | Average Case | Worst Case | Space |
| ------------------ | --------: | -----------: | ---------: | ----: |
| **Bubble Sort**    |      O(N) |        O(N²) |      O(N²) |  O(1) |
| **Selection Sort** |     O(N²) |        O(N²) |      O(N²) |  O(1) |
| **Insertion Sort** |      O(N) |        O(N²) |      O(N²) |  O(1) |

> **Note:** The O(N) best case for Bubble Sort assumes an optimized implementation with an early-stop check.

## Summary

* **Bubble Sort:** Repeatedly swaps adjacent elements.
* **Selection Sort:** Finds the minimum element and places it in the correct position.
* **Insertion Sort:** Takes one element at a time and inserts it into the sorted portion.

All three algorithms are useful for understanding the fundamentals of sorting, but they are generally **not suitable for large datasets** because their average-case complexity is O(N²).
