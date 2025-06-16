## Problem Statement:
You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.
A substring is a contiguous sequence of characters within a string.

## Problem Link:
https://leetcode.com/problems/largest-odd-number-in-string/

## Approach:
The idea is to check odd number from the last in the string just to return the largest odd number.
Iterate through i = s.length - 1 till 0:
Check if s[i] is odd then return the substring from 0 to i+1.
Return an empty string in case of no odd number.

## Time Complexity:
O(N)

## Space Complexity:
O(1)


