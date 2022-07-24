# Maximum Subarray

## Problem Type

Dynamic Programming (Kadane's algorithm)

## Solution description

The O(n) solution is to iterate through the list of numbers once and maintain a running sum. If you come across a number that is greater than adding it to the running sum (this can only be the case for a non-positive number), then reset the running sum to equal the current number. Check if the running sum is greater than the maximum sum each iteration. 