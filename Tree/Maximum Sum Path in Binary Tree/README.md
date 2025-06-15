## Problem Statement:
Given the root of a binary tree, return the maximum path sum of any non-empty path.

## Problem Link:
https://leetcode.com/problems/binary-tree-maximum-path-sum/

## Approach:
Initialise the variable maxi to the minimum possible integer value.
Call the recursive function `findMaxPathSum` with the root of the binary tree and the reference parameter maxi.
If the current node is null, return 0.
Calculate the maximum path sum for the left and right subtree using recursion.
Update the overall maximum path sum (maxi) by considering the sum of the left and right subtree paths plus the current node's value. This represents the sum of the path that includes the current node. This sum is used to update the overall maximum path sum (maxi) when the current node serves as the turning point in the path.

## Time Complexity:
O(N)

## Space Complexity:
O(1)
