Complexity Analysis of Linear Search

Time Complexity:

Best Case — O(1): Target is found at the first position.
Worst Case — O(N): Target is at the last position or not present.
Average Case — O(N): On average, we may need to check many elements.

Space Complexity:

Auxiliary Space — O(1): No extra data structure is required.


Advantages:

Works on both sorted and unsorted arrays.
Simple and easy to implement.
Works with different data types.
Requires O(1) extra space.
Good for small datasets.


Drawbacks:

Not efficient for large datasets.
Worst-case time complexity is O(N).
Does not take advantage of a sorted array.
Can be inefficient when performing many searches.


When to Use:

When the dataset is small.
When the data is unsorted.
When only a few searches are needed.
When simplicity and low memory usage are important.