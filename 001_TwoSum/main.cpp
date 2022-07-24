#include "Solution.hpp"

int main() {
    Solution solution;
    std::vector<int> nums{2,7,11,15};
    int target = 9;

    solution.twoSum(nums, target);

    return 0;
}