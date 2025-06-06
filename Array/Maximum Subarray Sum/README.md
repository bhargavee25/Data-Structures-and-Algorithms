## Problem Link:
https://leetcode.com/problems/maximum-subarray/description/ 
## Problem Statement:
Given an integer array nums, find the subarray with the largest sum, and return its sum.
## Approach:
To calculate the maximum sum of subarray ending at current element, say maxEnding, we can use the maximum sum ending at the previous element.

Extend the maximum sum subarray ending at the previous element by adding the current element to it. If the maximum subarray sum ending at the previous index is positive, then it is always better to extend the subarray.

So maxEnding at index i = max(maxEnding at index (i - 1) + arr[i], arr[i]) and the maximum value of maxEnding at any index will the answer.

## Time Complexity: 
O(n) 
## Space Complexity: 
O(1)
