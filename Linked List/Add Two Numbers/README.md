## Problem Link:
https://leetcode.com/problems/add-two-numbers/

## Problem Statement:
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

## Approach:
Create a dummy node which is the head of new linked list.


Create a node temp, initialise it with dummy.


Initialize carry to 0.


Loop through lists l1 and l2 until you reach both ends, and until carry is present.


Set sum=l1.val+ l2.val + carry.


Update carry=sum/10.


Create a new node with the digit value of (sum%10) and set it to temp node's next, then advance temp node to next.


Advance both l1 and l2.


Return dummy's next node.
## Time Complexity:
 O(max(m,n))

## Space Complexity:
 O(max(m,n))
