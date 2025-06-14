## Problem Statement:
Given the root of a binary tree, return the preorder traversal of its nodes' values

## Problem Link:
https://leetcode.com/problems/binary-tree-preorder-traversal/

## Approach:
Check for base case that if the current node is null, exit the void function. Push the value of the current node into the preorder traversal array.  Invoke the preorder function on the left child then right child to traverse the left and right subtrees in the preorder manner respectively.

## Time Complexity:
O(N)

## Space Complexity:
O(N)
