## Problem Statement:
Given the root of a binary tree, return the inorder traversal of its nodes' values

## Problem Link:
https://leetcode.com/problems/binary-tree-inorder-traversal/

## Approach:
Check for base case that if the current node is null, exit the void function.Invoke the preorder function on the left child. Push the value of the current node into the preorder traversal array. Then right child to traverse the right subtrees.
## Time Complexity:
O(N)

## Space Complexity:
O(N)
