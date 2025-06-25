## Problem Link:
https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

## Problem Statement:
Given the sorted rotated array nums of unique elements, return the minimum element of this array.

## Approach:
We can optimize the minimum element searching by using Binary Search where we find the mid element and then decide whether to stop or to go to left half or right half:  

If arr[mid] > arr[high], it means arr[low ... mid] is sorted and we need to search in the right half. So we change low = mid + 1.
If arr[mid] <= arr[high], it means arr[mid ... high] is sorted and we need to search in the left half. So we change high = mid. (Note: Current mid might be the minimum element).

Time Complexity:
O(log n)

Space Complexity:
O(1)
