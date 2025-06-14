## Problem Statement:
Given the root of a binary tree, return its maximum depth.

## Problem Link:
https://leetcode.com/problems/maximum-depth-of-binary-tree/

## Approach:
Initialise a queue for level order traversal and a variable to track the depth.Check if the root is null, if so return the answer as 0 indicating an empty tree.
Insert the root of the Binary Tree into the queue and set the level as 0.
Begin a loop that continues until the queue becomes empty where at each level:
Increment by 1, indicating we are moving to the next level.
Determine the number of nodes at the current level by storing the size of the queue.
Iterate over the number of nodes equal to the size of the queue and at each node, Pop it from front of the queue and push its left and right children.
## Time Complexity:
O(N)

## Space Complexity:
O(N)
