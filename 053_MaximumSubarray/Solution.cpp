#include "Solution.hpp"

int Solution::maxSubArray(std::vector<int>& nums) {
    int maxSum = std::numeric_limits<int>::min();
    int runningSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        int currentNumber = nums[i];

        // If the current number is greater than the running sum, then just reset the running sum
        runningSum = std::max( currentNumber, runningSum += currentNumber );
        maxSum = std::max(maxSum, runningSum);
    }

    return maxSum;
}