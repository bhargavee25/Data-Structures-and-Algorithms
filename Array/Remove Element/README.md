## Problem Link:
https://leetcode.com/problems/remove-element/description/
## Problem Statement:
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
## Approach:
Iterate over the array while maintaining a subarray at the beginning that contains only the elements which are not equal to the element to be removed. 

Use a counter, to track the ending point of this subarray and whenever we encounter an element which is not equal to element, add the element at kth index and increment the value of k. 
## Time Complexity: 
O(n) 
## Space Complexity: 
O(1)
