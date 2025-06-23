## Problem Statement: 
Given a binary tree, determine if it is height-balanced.

## Problem Link:
https://leetcode.com/problems/balanced-binary-tree/

## Approach:
Traverse the Binary Tree is post-order manner using recursion. Visit left subtree, then right subtree, and the root node.
During the traversal, for each node, calculate the heights of the its left and right subrees. Use the obtained subtree heights to validate the balance conditions for the current node.
At each node, if the absolute difference between the heights of the left and right subtrees is greater than 1 or if any subtree is unbalanced return -1 immediately indicating an unbalanced tree.
If the tree is balanced, return the height of the current node by considering the maximum height of its left and right subtree plus 1 accounting for the current node.
Complete the traversal until all nodes are visited and return the final result - either the height of the entire tree if balanced or -1 if unbalanced.

## Time Complexity:
O(N)

## Space Complexity:
O(1)
