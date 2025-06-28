## Problem Link:
https://leetcode.com/problems/remove-nth-node-from-end-of-list/

## Problem Statement:
Given the head of a linked list, remove the nth node from the end of the list and return its head.

## Approach:
1. Initialize two pointers, slow and fast, to the head of the linked list. Initially, only fast will move till it crosses N nodes, after which both of the pointers will move simultaneously.

2. Traverse the linked list till the fast pointer reaches the last node, that is, the Lth Node, at this stage, the slow pointer is guaranteed to be at the (L-N)th node.


3. Point this slow pointer to the (L-N+2)th node, effectively skipping the Nth node from the end or the (L-N+1)th node from the start.


4. Finally, free up the space occupied by this to delete it.

## Time Complexity:
O(N)

## Space Complexity:
O(1)
