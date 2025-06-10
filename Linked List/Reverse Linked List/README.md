## Problem Link: 
https://leetcode.com/problems/reverse-linked-list/
## Problem Statement: 
Given the head of a singly linked list, reverse the list, and return the reversed list. 
## Approach: 
The idea is to reverse the links of all nodes using three pointers: 


1.prev: pointer to keep track of the previous node


2.curr: pointer to keep track of the current node 


3.next: pointer to keep track of the next node


Starting from the first node, initialize curr with the head of linked list and next with the next node of curr. Update the next pointer of curr with prev. Move the three pointer by updating prev with curr and curr with next.
## Time Complexity: 
O(n) 
## Space Complexity: 
O(1)
