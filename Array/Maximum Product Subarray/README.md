## Problem Link:
https://leetcode.com/problems/maximum-product-subarray/
## Problem Statement:
Given an integer array nums, find a subarray that has the largest product, and return the product.
## Approach:
If the input array has only positive elements. Then, iterate from left to right keeping track of the maximum running product ending at any index. The maximum product would be the product ending at the last index. 
If we encounter zero, then all the subarrays containing this zero will have product = 0, so zero simply resets the product of the subarray.
If we encounter a negative number, we need to keep track of the minimum product as well as the maximum product ending at the previous index. So, keeping track of minimum product ending at any index is important as it can lead to the maximum product on encountering a negative number. 
## Time Complexity: 
O(n) 
## Space Complexity: 
O(1)
