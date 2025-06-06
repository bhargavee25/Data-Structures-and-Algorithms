## Problem Link:
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
## Problem Statement:
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
## Approach
In order to maximize the profit, minimize the cost price and maximize the selling price. Keep track of the minimum buy price of stock encountered so far. For every price, subtract with the minimum so far and if we get more profit than the current result, update the result
## Time Complexity: 
O(n) 
## Space Complexity: 
O(1)
