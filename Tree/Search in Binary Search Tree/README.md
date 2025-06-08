## Problem Statement: 
You are given the root of a binary search tree (BST) and an integer val. Find the node in the BST that the node's value equals val and return the subtree rooted with that node. If such a node does not exist, return null 
## Problem Link: 
https://leetcode.com/problems/search-in-a-binary-search-tree/ 
## Approach: 
The idea is to traverse the Binary search tree, starting from the root node. If the current node's data is equal to key, then return root. If node's value is less than key, then traverse the right subtree by updateing current as current'right. Else, set current as current'left to travrese in left subtree. If current becomes NULL , key is not present in the BST, return {}. 
## Time Complexity: 
O(h) 
## Space Complexity: 
O(1)
