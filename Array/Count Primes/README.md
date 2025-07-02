## Problem Link:
https://leetcode.com/problems/count-primes/

## Problem Statement:
Given an integer n, return the number of prime numbers that are strictly less than n

## Approach:
We initialize a list called primes filled with True, representing all numbers from 0 to n-1. Here, True signifies that the number is assumed to be a prime number.

We iterate over each number starting from 2 (the smallest prime number) using a for loop for i in range(2, n):. If the number is marked as True in our primes list, it is a prime, as it hasn't been marked as not prime by an earlier iteration (via its multiples).

When we find such a prime number i, we increment our answer counter ans by 1, as we've just found a prime.

To mark the multiples of i as not prime, we loop through a range starting from i*2 up to n (exclusive), in steps of i, using the inner loop for j in range(i + i, n, i):. The step of i makes sure we only hit the multiples of i.

For each multiple j of the prime number i, we set primes[j] to False to denote that j is not a prime.

Continue the process until all numbers in our list have been processed.

Finally, we return ans, which now holds the count of prime numbers strictly less than n.

## Time Complexity:
O(log(log n))

## Space Complexity:
O(n)
