## Problem Link:
https://leetcode.com/problems/binary-tree-level-order-traversal/

## Problem Statement:
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

## Approach:
Initialise an empty queue data structure to store the nodes during traversal. Create a 2D array or a vector of a vector to store the level order traversal. If the tree is empty, return this empty 2D vector.
Enqueue the root node ie. Add the root node of the binary tree to the queue.
Iterate until the queue is empty:
Get the current size of the queue. This size indicates the number of nodes at the current level.
Create a vector ‘level’ to store the nodes at the current level.
Iterate through ‘size’ number of nodes at the current level:
Pop the front node from the queue.
Store the node’s value in the level vector.
Enqueue the left and right child nodes of the current node (if they exist) into the queue.
After processing all the nodes at the current level, add the ‘level’ vector to the ‘ans’ 2D vector, representing the current level. Once the traversal loop completes ie. all levels have been processed, return the ‘ans’ 2D vector containing the level-order traversal.

## Time Complexity:
O(N)

## Space Complexity:
O(N)
