## Problem Statement:
Given the roots of two binary trees p and q, write a function to check if they are the same or not.

## Problem Link:
https://leetcode.com/problems/same-tree/

## Approach:
Start at the root node of both trees.

Check if the values of the current nodes in both trees are equal. If not return false.

Recursively check the left then right subtree of the current node in both trees is identical.

If all the recursive checks return true, then return the trees are identical, otherwise they are not.

## Time Complexity:
O(N+M)

## Space Complexity:
O(1)
