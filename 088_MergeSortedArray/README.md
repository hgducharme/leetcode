# Merge Sorted Array

## Problem Type

Two pointers, Three pointers

## Solution description

**My solution:**

- Maintain two pointers, one iterating through `nums1` and the other in `nums2`. 

- As we iterate through `nums1` compare the element behind each pointer and see which should be written first

- If the element in `nums2` comes before the element in `nums1`, the `nums1` element gets "popped" off and into a cache

- We keep iterating until all elements have been written

**A better solution:**

- Maintain three pointers: one at the end of the elements in `nums1`, likewise for `nums2`, and one at the **very** end of `nums1`

- Iterate backwards through `nums1` and `nums2`, comparing each element, and writing the one that comes last to the very end of `nums1`