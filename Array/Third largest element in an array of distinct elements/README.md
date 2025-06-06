## Problem Link 
https://www.geeksforgeeks.org/problems/third-largest-element/1
## Problem Statement 
Given an array of n integers, the task is to find the third largest element. All the elements in the array are distinct integers.  
## Approach 
Create three variables, first, second, third, to store indices of three largest elements of the array. Initially all of them are initialized to a minimum value.
Move along the input array from start to the end.
For every index check if the element is larger than first or not. 
Update the value of first, if the element is larger, and assign the value of first to second and second to third. So the largest element gets updated and the elements previously stored as largest becomes second largest, and the second largest element becomes third largest.
Else if the element is larger than the second, then update the value of second, and the second largest element becomes third largest.
If the previous two conditions fail, but the element is larger than the third, then update the third.

## Time Complexity: 
O(n) 
## Space Complexity: 
O(1)
