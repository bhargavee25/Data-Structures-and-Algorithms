## Problem Link:
https://leetcode.com/problems/max-consecutive-ones/

## Problem Statement:
Given a binary array nums, return the maximum number of consecutive 1's in the array.

## Approach:
Maintain a variable count that keeps a track of the number of consecutive 1’s while traversing the array. The other variable maxi maintains the maximum number of 1’s, in other words, it maintains the answer.
Start traversing from the beginning of the array.
If  the value at the current index is equal to 1 we increase the value of count by one. After updating  the count variable if it becomes more than the maxi  update the maxi.
If the value at the current index is equal to zero we make the variable count as 0 since there are no more consecutive ones.

## Time Complexity:
O(N)

## Space Complexity:
O(1)
