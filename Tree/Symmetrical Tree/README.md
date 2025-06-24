## Problem Statement:
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

## Problem Link:
https://leetcode.com/problems/symmetric-tree/

## Approach:
Check if the given tree is empty ie. root is null. If the tree is empty, it is considered symmetric by default and we return true. If the tree is not empty, we call a utility function, passing the left and right subtrees of the root. This utility function handles the recursive checks for symmetry.
The base case for recursion is when both the left and right subtrees are empty, indicating a symmetric structure and we return true. If only one of the subtrees is empty (while the other is not), we return false as this violates the conditions of symmetry.

Compare the values of the current nodes from the left and right subtrees. For the binary tree to be symmetric, the corresponding nodes received should have equal values.
Recursively check the symmetry of these subtrees. We check if the left subtree of the left node is symmetric with the right subtree of the right node.
Similarly, also check the symmetry of the right subtree of the left node with the left subtree of the right node.
Hence, we compare the node values and recursively explore the left and right subtrees in a mirrored fashion.

## Time Complexity:
O(N)

## Space Complexity:
O(1)
