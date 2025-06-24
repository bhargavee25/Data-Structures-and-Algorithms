## Problem Statement:
Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

## Problem Link:
https://leetcode.com/problems/binary-tree-right-side-view/

## Approach: 
Initialise an empty vector `res` to store the left view nodes.
Implement a recursive depth-first traversal of the binary tree.
Check if the current node is null, if true, return the function as we have reached the end of that particular vertical level.
The recursive function takes in arguments the current node of the Binary Tree, its current level and the result vector.
We check if the size of the result vector is equal to the current level.
If true, it means that we have not yet encountered any node at this level in the result vector. Add the value of the current node to the result vector.
Recursively call the function for the current nodes right then left child with an increased level.
We call the right child first as we want to traverse the right most nodes. In cases where there is no right child, the recursion function backtracks and explores the left child.
The recursion continues until it reaches the base case. Return the result vector at the end.



## Time Complexity:
O(log 2N)

## Space Complexity:
O(log 2N)
