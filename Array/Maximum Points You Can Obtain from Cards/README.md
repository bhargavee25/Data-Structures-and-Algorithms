## Problem Link:
https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/

## Problem Statement:
Given the integer array cardPoints and the integer k, return the maximum score you can obtain.

## Approach:
To select cards from the beginning or end of the array containing value of the cards, we can use a sliding window approach with two pointers:


A left pointer that initially covers the first k elements from the left.


A right pointer that initially covers no elements from the right (is present at the end and moves to the left).

## Time Complexity:
O(2k)

## Space Complexity:
O(1)
