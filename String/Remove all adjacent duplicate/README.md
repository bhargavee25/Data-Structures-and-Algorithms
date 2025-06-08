## Problem Statement: 
Given a string, the task is to remove all the duplicate adjacent characters from the given string 
## Problem Link: 
https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/ 
## Approach: 
1.Create a stack, st to remove the adjacent duplicate characters in str.

2.Traverse the string str and check if the stack is empty or the top element of the stack not equal to the current character. 

3.If found to be true, push the current character into st.

4.Otherwise, pop the element from the top of the stack.

5.Finally, print all the remaining elements of the stack.
## Time Complexity: 
O(N)
## Space Complexity: 
O(N)
