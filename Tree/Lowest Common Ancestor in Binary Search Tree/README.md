## Problem Statement: 
Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST. 
## Problem Link: 
https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/ 
## Approach: 
In a Binary search tree, while traversing the tree from top to bottom the first node which lies in between the two numbers n1 and n2 is the LCA of the nodes. So traverse the BST , if node's value is greater than both n1 and n2 then our LCA lies in the left side of the node, if it is smaller than both n1 and n2, then LCA lies on the right side. Otherwise, the root is LCA. 
## Time Complexity: 
O(h) 
## Space Complexity: 
O(1)
