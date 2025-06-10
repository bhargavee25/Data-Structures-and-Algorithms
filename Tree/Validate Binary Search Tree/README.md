## Problem Link: 
https://leetcode.com/problems/validate-binary-search-tree/ 
## Problem Statement: 
Given the root of a binary tree, determine if it is a valid binary search tree (BST).
## Approach: 
The idea is to use a recursive helper function, to check whether a subtree is a binary search tree (BST) within a specified range of minimum and maximum values. If it falls outside this range, it violates BST properties, so we return false. 
For the left subtree,  updated range as the max is set to (node->data - 1 ) because all values in the left subtree must be smaller than the current node's value.
For the right subtree, the updated range as the min is set to (node->data + 1) because all values in the right subtree must be greater than the current node's value.
Both recursive calls must return true for the entire subtree to be a valid BST.
## Time Complexity: 
O(n) 
## Space Complexity: 
O(h)
