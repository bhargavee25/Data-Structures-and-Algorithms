## Problem Link:
https://leetcode.com/problems/find-peak-element/

## Problem Statement:
Find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.
## Approach:
If an element is smaller than it's next element then it is guaranteed that at least one peak element will exist on the right side of this element.
Conversely if an element is smaller than it's previous element then it is guaranteed that at least one peak element will exist on the left side of this element.

## Time Complexity:
O(logn)

## Space Complexity:
O(1)
