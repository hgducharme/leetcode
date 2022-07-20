#include "Solution.hpp"

int Solution::climbStairs(int n) {
    if (n < 1) return 0;
    if (n == 1 || n == 2) return n;

    /* Make the cache one-based indexing so it's intuitive to work with */
    cachedSteps.resize(n + 1);
    cachedSteps[1] = 1;
    cachedSteps[2] = 2;
    cachedSteps[3] = 3;

    int uniqueStairClimbs = calculateUniqueStairClimbs(n);

    return uniqueStairClimbs;
}

int Solution::calculateUniqueStairClimbs(int n) {
    if (cachedSteps[n] != 0) return cachedSteps[n];

    /* How many ways are there to climb if the last move is one step?
     * How many ways are there to climb if the last move is jumping two steps?
     * Then add the amount of ways to do the last three steps since we're not including that.
    */
    cachedSteps[n] = calculateUniqueStairClimbs(n - 1) + calculateUniqueStairClimbs(n - 2);

    return cachedSteps[n];
}