#include "Solution.hpp"

int main() {
    Solution solution;
    int testCase = 10;

    std::vector<int> nums1{1,2,3,0,0,0};
    int m = 3;
    std::vector<int> nums2{2,5,6};
    int n = 3;

    solution.merge(nums1, m, nums2, n);

    return 0;
}