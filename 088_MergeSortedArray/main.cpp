#include "Solution.hpp"

int main() {
    Solution solution;

    // std::vector<int> nums1{4,5,6,0,0,0};
    // int m = 3;
    // std::vector<int> nums2{1,2,3};
    // int n = 3;

    // std::vector<int> nums1{1,2,3,0,0,0};
    // int m = 3;
    // std::vector<int> nums2{2,5,6};
    // int n = 3;

    // std::vector<int> nums1{4,0,0,0,0,0};
    // int m = 1;
    // std::vector<int> nums2{1,2,3,5,6};
    // int n = 5;

    std::vector<int> nums1{0,0,3,0,0,0,0,0,0};
    int m = 3;
    std::vector<int> nums2{-1,1,1,1,2,3};
    int n = 6;

    solution.merge(nums1, m, nums2, n);

    return 0;
}