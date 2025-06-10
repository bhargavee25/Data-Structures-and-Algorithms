## Problem Link: 
https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
## Problem Statement: 
You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.
## Approach: 
The solution requires two traversals of the linked list. The middle node can be deleted using one traversal. The idea is to use two pointers, slow_ptr, and fast_ptr. The fast pointer moves two nodes at a time, while the slow pointer moves one node at a time. When the fast pointer reaches the end of the list, the slow pointer will be positioned at the middle node. Next, you need to connect the node that comes before the middle node (prev) to the node that comes after the middle node. This skips over the middle node, removing it from the list.
## Time Complexity: 
O(n) 
## Space Complexity: 
O(1)
