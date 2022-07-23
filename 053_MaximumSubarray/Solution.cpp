#include "Solution.hpp"

int Solution::maxSubArray(std::vector<int>& nums) {
    int maxSum = 0;
    int startIndex = 0;
    int endIndex = 0;
    std::map<int, std::vector<int>> cache;

    /* TODO:
     * The goal: Iterate over `nums` only once. Keep a running total for element in the vector.
     * If nums = [1, 2, 3], then we have a tuple for each element that indicates (currentSum, maxSum, maxSumLastIndex).
     * As we iterate through the list, we will check if the currentSum is greater than the maxSum. if so, update
     * maxSum and maxSumLastIndex. This tuple is being calculated for each element in nums, so it will be a little
     * memory intensive I think.
     */

    for (int i = 0; i < nums.size(); i++) {
        int current_number = nums[i];
        int previous_number = (i > 0) ? nums[i - 1] : 0;

        std::vector<int> subsequence_data(3);
        cache.insert({i, subsequence_data});

        for (auto iter = cache.begin(); iter != cache.end(); iter++) {
            int beginningIndex = iter->first;
            std::vector<int> subarray_data = iter->second;

            // For this subarray, calculate the current sum
            subarray_data[0] += current_number;

            // For this subarray, if the current sum is the local maximum, update the record
            // TODO: Is this even necessary? Why are we storing local maxs? All we care about is global max?
            if (subarray_data[0] > subarray_data[1]) {
                subarray_data[1] = subarray_data[0];
                subarray_data[2] = i;
            }

            // Check if it's the global maximum
            if (subarray_data[0] > maxSum) {
                maxSum = subarray_data[0];
                startIndex = beginningIndex;
                endIndex = i;
            }

        }
    }

    return maxSum;
}