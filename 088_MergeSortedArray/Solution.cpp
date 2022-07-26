#include "Solution.hpp"

void Solution::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    if (n == 0) {
        return;
    }

    if (m == 0) {
        nums1.assign(nums2.begin(), nums2.end());
        return;
    }

    int j = 0;
    int placeFirst, placeLater;

    for (int i = 0; i < nums1.size(); i++) {
        int num1 = nums1[i];
        int num2 = nums2[j];

        if (i >= n) {
            nums1[i] = nums2[j];
            j++;
        }
        else if (num1 > num2) {
            placeFirst = num2;
            placeLater = num1;

            nums1[i] = placeFirst;
            nums2[j] = placeLater;
        }
        else {
            // If num1 <= num2, just leave num1 alone and continue to the next element.
            // We only insert num2 into nums1 array if num2 > num1.
        }
    }
}