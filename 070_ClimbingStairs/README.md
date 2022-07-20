# Climbing Stairs

## Problem Type

Dynamic Programming

## Solution description

The trick to this problem is to realize the recursive relationship:

```
climbStairs(n) = climbStairs(n - 1) + climbStairs(n - 2)
```

That is, the number of ways to reach the `nth` step is the sum of the number of ways to reach the `n-1` step and the number of ways to reach the `n-2` step. Put differently, how many ways can we reach the `nth` step if our first move is with one step? Now how many ways can we reach the `nth` step if our first move is by jumping two steps?

For example, consider `n = 4`:

1. If our first move is to do one step, then we have three steps remaining. The number of ways to traverse the next three steps is three.

2. If our first move is to jump two steps, then we have two steps remaining. The number of ways to traverse the next two steps is two. 

3. Therefore, the number of ways to traverse four steps is `3 + 2 = 5`.