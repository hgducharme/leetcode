#include "Solution.hpp"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
    std::map<int, int> cache;
    std::vector<int> results(2);
    for (int i = 0; i < nums.size(); i++) {
        int numberNeeded = target - nums[i];
        if (cache.count(numberNeeded)) {
            int neededIndex = cache[numberNeeded];
            results[0] = std::min(i, neededIndex);
            results[1] = std::max(i, neededIndex);
            return results;
        }
        cache[nums[i]] = i;
    }
    return results;
}