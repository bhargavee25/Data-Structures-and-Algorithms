## Problem Link:
https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1 
## Problem Statement:
Given an unsorted array of size n. Array elements are in the range of 1 to n. One number from set {1, 2, ...n} is missing and one number occurs twice in the array. The task is to find these two numbers.
## Approach:
Traverse the array and for each element get its absolute value.
Use value-1 as an index and make the element at that index negative.
If we find that the element at that index is already negative, we've found our repeating number.
After the first traversal, iterate through the array again looking for any positive value
When we find a positive value at index i, i+1 is our missing number.
Return both the repeating and missing numbers
## Time Complexity: 
O(n) 
## Space Complexity: 
O(1)
