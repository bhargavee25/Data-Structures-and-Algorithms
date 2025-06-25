## Problem Link:
https://leetcode.com/problems/intersection-of-two-linked-lists/

## Problem Statement:
Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

## Approach:
Initialize two pointers.
Traverse through the lists, one node at a time.
When ptr1 reaches the end of a list, then redirect it to head2.
Similarly, when ptr2 reaches the end of a list, redirect it to the head1.
Once both of them go through reassigning, they will be at equal distance from the collision point.
If at any node ptr1 meets ptr2, then it is the intersection node.
After the second iteration if there is no intersection node , returns NULL.

## Time Complexity:
O(m+n)

## Space Complexity:
O(1)
