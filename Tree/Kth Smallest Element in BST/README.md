Problem Link:
https://leetcode.com/problems/kth-smallest-element-in-a-bst/

Problem Statement:
Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.

Approach:
The idea is to traverse the binary search tree using in-order traversal while maintaining the count of nodes traversed. If the node count becomes equal to k, then return the node.
Time Complexity:
O(k)

Space Complexity:
O(h)
