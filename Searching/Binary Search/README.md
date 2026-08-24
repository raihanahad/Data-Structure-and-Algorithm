# Complexity Analysis of Binary Search

**Time Complexity:**

* **Best Case — O(1):** Target is found at the middle position in the first comparison.
* **Worst Case — O(log N):** The search range is divided into half at each step.
* **Average Case — O(log N):** Usually, only a small number of elements need to be checked.

**Space Complexity:**

* **Auxiliary Space — O(1):** For the iterative approach, no extra data structure is required.

# Advantages

* Very fast for **large datasets**.
* Time complexity is **O(log N)**.
* Reduces the search space by **half at each step**.
* Requires **O(1) extra space** in the iterative approach.
* Much more efficient than Linear Search for large sorted arrays.

# Drawbacks

* The array must be **sorted** before searching.
* Sorting the data first can take additional time.
* Not as straightforward as Linear Search.
* Less suitable when data changes frequently and needs to be sorted again.

# When to Use

* When the dataset is **large**.
* When the data is already **sorted**.
* When **multiple searches** are required on the same sorted data.
* When fast searching is important.

> **In short:** Binary Search is ideal for **large, sorted datasets** because it reduces the search space by half in every step.
