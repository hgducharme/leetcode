# Two Sum

## Problem Type

Data structures

## Solution description

Obviously there is the brute force solution where each combination of numbers can be checked (O(n^2)). A more optimal solution that is O(n) is to subtract each number from the target to see which complimentary nubmer is needed to complete the sum. By storing each seen number and their index into a hash table, we can search for the complimentary number in O(1) time. If the number is not there, add the current number and its index to the hasht able and keep iterating.