## Problem Link:
https://leetcode.com/problems/linked-list-cycle/

## Problem Statement:
Given head, the head of a linked list, determine if the linked list has a cycle in it.
Return true if there is a cycle in the linked list. Otherwise, return false.

## Approach:
Initialise two pointers, slow and fast, to the head of the linked list. slow will advance one step at a time, while fast will advance two steps at a time. These pointers will move simultaneously.
Traverse the linked list with the slow and fast pointers. While traversing, repeatedly move slow one step and fast two steps at a time.
Continue this traversal until one of the following conditions is met:
fast or fast.next reaches the end of the linked list. In this case, there is no loop in the linked list ie. the linked list is linear, and the algorithm terminates by returning false.
fast and slow pointers meet at the same node. This indicates the presence of a loop in the linked list, and the algorithm terminates by returning true.

## Time Complexity:
O(N)

## Space Complexity:
O(1)
