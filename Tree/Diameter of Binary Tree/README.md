## Problem Statement:
Given the root of a binary tree, return the length of the diameter of the tree.

## Problem Link:
https://leetcode.com/problems/diameter-of-binary-tree/

## Approach:
Initialise a variable `diameter` to store the diameter of the tree. Create a function height that takes a node and a reference to the diameter variable as input.
If the node is null, return 0 indicating the height of an empty tree.
Recursively calculate the height of the left subtree then height of the right subtree.
Set the current diameter as the sum of left subtree, right subtree + 1 for the current level.
Update the diameter with the maximum of the current diameter and the global diameter.

Time Complexity:
O(N)

Space Complexity:
O(1)
