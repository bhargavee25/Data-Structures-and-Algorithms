## Problem Link:
https://leetcode.com/problems/move-zeroes/description/
## Problem Statement:
Given an array of integers arr[], the task is to move all the zeros to the end of the array while maintaining the relative order of all non-zero elements.
## Approach:
Take a pointer, say count to track where the next non-zero element should be placed. 
On encountering a non-zero element, instead of directly placing the non-zero element at arr[count], swap the non-zero element with arr[count]. This will ensure that if there is any zero present at arr[count], it is pushed towards the end of array and is not overwritten. 
## Time Complexity: 
O(n) 
## Space Complexity: 
O(1)
