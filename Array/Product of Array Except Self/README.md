## Problem Link:
https://leetcode.com/problems/product-of-array-except-self/
## Problem Statement:
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. 
## Approach:
The idea is to handle two special cases of the input array: when it contains zero(s) and when it doesn't.

If the array has no zeros, product of array at any index (excluding itself) can be calculated by dividing the total product of all elements by the current element. 

However, division by zero is undefined, so if there are zeros in the array, the logic changes. If there is exactly one zero, the product for that index will be the product of all other non-zero elements, while the elements in rest of the indices will be zero. 
If there are more than one zero, the product for all indices will be zero, since multiplying by zero results in zero
## Time Complexity: 
O(n) 
## Space Complexity: 
O(1)
