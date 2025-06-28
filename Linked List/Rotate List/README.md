## Problem Link:
https://leetcode.com/problems/rotate-list/

## Problem Statement:
Given the head of a linked list, rotate the list to the right by k places.

## Approach:
Calculate the length of the list.
Connect the last node to the first node, converting it to a circular linked list.
Iterate to cut the link of the last node and start a node of k%length of the list rotated list.

## Time Complexity:
 O(length of list) + O(length of list - (length of list%k))

## Space Complexity:
O(1)
