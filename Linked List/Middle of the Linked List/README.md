## Problem Link: 
https://leetcode.com/problems/middle-of-the-linked-list/
## Problem Statement: 
Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.
## Approach: 
Traverse linked list using a slow pointer and a fast pointer. Move the slow pointer one node forward and the fast pointer to two nodes forward. When the fast pointer reaches the last node or NULL, then the slow pointer will reach the middle of the linked list. 
In case of odd number of nodes in the linked list, slow_ptr will reach the middle node when fast_ptr will reach the last node and in case of even number of nodes in the linked list, slow_ptr will reach the middle node when fast_ptr will become NULL.
## Time Complexity: 
O(n) 
## Space Complexity: 
O(1)
