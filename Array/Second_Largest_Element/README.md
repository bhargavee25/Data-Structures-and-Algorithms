## Problem Link: 
https://www.geeksforgeeks.org/problems/second-largest3735/1 
## Problem Statement:
Given an array of positive integers arr[], return the second largest element from the array. 
If the second largest element doesn't exist then return -1. 
Note: The second largest element should not be equal to the largest element 
## Approach:
The idea is to keep track of the largest and second largest element while traversing the array. 
Initialize largest and secondLargest with -1. 
Now, for any index i, If arr[i] > largest, update secondLargest with largest and largest with arr[i]. 
Else If arr[i] < largest and arr[i] > secondLargest, update secondLargest with arr[i]. 
## Time Complexity: 
O(n) 
## Space Complexity: 
O(1)
