## Problem Statement:
Given an integer n, return the number of structurally unique BST's (binary search trees) which has exactly n nodes of unique values from 1 to n.

## Problem Link:
https://leetcode.com/problems/unique-binary-search-trees/

## Approach:
 The key to solving the problem is realizing that when we choose a number i from 1 to n to be the root of a BST, then 1 to i-1 will necessarily form the left subtree and i+1 to n will form the right subtree.

## Time Complexity:
O(N)

## Space Complexity:
O(1)
