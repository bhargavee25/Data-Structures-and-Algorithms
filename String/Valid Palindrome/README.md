## Problem Link: 
https://leetcode.com/problems/valid-palindrome/ 
## Problem Statement: 
Given a string s, return true if it is a palindrome, or false otherwise.
## Approach:
Check the string using functional recursion where firstly, the letters on the two ends of the string start and end are compared to see if they’re the same or not.
If they’re the same then we simply call recursion for the next elements start+1, end-1 and so on until the start becomes greater than or equal to the end. 
If at any point the start and the end differ, we return false stating that the string is not a palindrome.
Otherwise, if the base condition is reached, then the string is obviously a palindrome and we return true.
## Time Complexity: 
O(n) 
## Space Complexity: 
O(1) 
