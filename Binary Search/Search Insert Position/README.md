## Problem Link:
https://leetcode.com/problems/search-insert-position/

## Problem Statement:
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

## Approach:
Declare the 2 pointers and an ‘ans’ variable initialized to n i.e. the size of the array.

Place the 2 pointers i.e. low and high: Initially, we will place the pointers like this: low will point to the first index and high will point to the last index.
Calculate the ‘mid’
mid = (low+high) // 2
Compare arr[mid] with x.
If arr[mid] >= x: This condition means that the index mid may be an answer. So, we will update the ‘ans’ variable with mid and search in the left half if there is any smaller index that satisfies the same condition.


If arr[mid] < x: In this case, mid cannot be our answer and we need to find some bigger element.
The above process will continue until the pointer low crosses high.

Time Complexity:
O(log n)

Space Complexity:
O(1)
