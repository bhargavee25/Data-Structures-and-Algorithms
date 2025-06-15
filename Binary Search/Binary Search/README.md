## Problem Link:
https://leetcode.com/problems/binary-search/

## Problem Statement:
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

## Approach:
In order to divide the search space, we need to find the middle point of it. So, we will take a ‘mid’ pointer and do the following:
mid = (low+high) / 2 


Compare the middle element with the target.
If arr[mid] == target: We have found the target,
If target > arr[mid]: This case signifies our target is located on the right half of the array. So, the next search space will be the right half.
If target < arr[mid]: This case signifies our target is located on the left half of the array. So, the next search space will be the left half.


## Time Complexity:
O(log n)

## Space Complexity:
O(1)
