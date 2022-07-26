#include "Solution.hpp"

int main() {
    Solution solution;
    
    std::vector<int> nums1{1,2,2,1};
    std::vector<int> nums2{2,2};

    solution.intersect(nums1, nums2);

    return 0;
}