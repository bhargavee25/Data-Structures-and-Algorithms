## Problem Link:
https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/ 
## Problem Statement:
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
## Approach:
Start with idx = 1.


Loop through the array for i = 0 to n-1.


At each index i, if arr[i] is different from arr[i-1], assign arr[idx] = arr[i] and increment idx.


After the loop, arr[] contains the unique elements in the first idx positions. 
## Time Complexity: 
O(n) 
## Space Complexity: 
O(1)
