## Problem Statement: 
You are given the root node of a binary search tree (BST) and a value to insert into the tree. Return the root node of the BST after the insertion.  
## Problem Link: 
https://leetcode.com/problems/insert-into-a-binary-search-tree/ 
## Approach: 
1. Initilize the current node with root node.

2. Compare the key with the current node.


3. Move left if the key is less than or equal to the current node value.


4. Move right if the key is greater than current node value.


5. Repeat steps 2 and 3 until you reach a leaf node.


6. Attach the new key as a left or right child based on the comparison with the leaf node's value. 
## Time Complexity: 
O(h) 
## Space Complexity: 
O(1)
