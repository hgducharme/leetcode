#include "Solution.hpp"

int main() {
    Solution solution;
    std::vector<int> testCase{-2,1,-3,4,-1,2,1,-5,4};

    solution.maxSubArray(testCase);

    return 0;
}