#include "Solution.hpp"

bool Solution::containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> cache;

    for (int i = 0; i < nums.size(); i++) {
        int x = nums[i];
        if (cache.count(x)) {
            return true;
        }
        else {
            cache.insert(x);
        }
    }

    return 0;
}