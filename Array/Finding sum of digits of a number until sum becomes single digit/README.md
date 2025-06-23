## Problem Link: 
https://www.geeksforgeeks.org/problems/repeated-sum-of-digits3955/1
## Problem Statement: 
Given an integer n, we need to repeatedly find the sum of its digits until the result becomes a single-digit number.
## Approach:
If the sum of the digits itself consists of more than one digit, we can further express this sum as the sum of its digits plus a multiple of 9. Consequently, taking modulo 9 will eliminate the multiple of 9, until the sum of digits become single digit number.
As a result, the sum of the digits of any number, will equal its modulo 9. If the result of the modulo operation is zero, it indicates that the single-digit result is 9.
## Time Complexity: 
O(n) 
## Space Complexity: 
O(1)
