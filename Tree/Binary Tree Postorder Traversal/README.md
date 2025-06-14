## Problem Statement:
Given the root of a binary tree, return the postorder traversal of its nodes' values

## Problem Link:
https://leetcode.com/problems/binary-tree-postorder-traversal/

## Approach:
Check for base case that if the current node is null, exit the void function. Invoke the postorder function on the left child then right child to traverse the left and right subtrees in the postorder manner respectively. Push the value of the current node into the postorder traversal array.

## Time Complexity:
O(N)

## Space Complexity:
O(N)
