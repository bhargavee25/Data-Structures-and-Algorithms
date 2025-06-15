## Problem Link:
https://leetcode.com/problems/single-number/

## Problem Statement:
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

## Approach:
Perform XOR of all elements of the array, the XOR of each pair will result in 0. The result will be = 
0 ^ (single number) = single number.

So, if we perform the XOR of all the numbers of the array elements, we will be left with a single number.
We will just perform the XOR of all elements of the array using a loop and the final XOR will be the answer.
## Time Complexity:
O(N)

## Space Complexity:
O(1)
