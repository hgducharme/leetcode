#include "Solution.hpp"

void Solution::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    if (n == 0) {
        return;
    }

    if (m == 0) {
        nums1.assign(nums2.begin(), nums2.end());
        return;
    }

    int j = 0, k = 0;
    std::vector<int> cache;

    for (int i = 0; i < nums1.size(); i++) {
        int numToInsert;
        int num1 = nums1.at(i);
        int num2 = std::numeric_limits<int>::max();
        int cachedNum = std::numeric_limits<int>::max();
        bool usingCachedNum;

        bool cacheContainsUnsortedNumbers = (!cache.empty() && k < cache.size());
        if (cacheContainsUnsortedNumbers) {
            cachedNum = cache.at(k);
        }

        bool nums2HasUnsortedNumbers = j < nums2.size();
        if (nums2HasUnsortedNumbers) {
            num2 = nums2.at(j);

        // Determine which number we are inserting: is it from the nums2 array or is it from the cache?
        // This is important for how we increment our indexes.
        if (num2 > cachedNum) {
            numToInsert = cachedNum;
            usingCachedNum = true;
        }
        else {
            numToInsert = num2;
            usingCachedNum = false;
        }

        // If we've made it through all of the nums1 elements, just start inserting the items we have left over, in order
        if (i >= m) {
            nums1.at(i) = numToInsert;
            usingCachedNum ? k++ : j++;
        }
        // If the element in nums1 array is bigger than the element we currently have, then insert the smaller one
        else if (num1 > numToInsert) {
            int placeLater = num1;
            nums1.at(i) = numToInsert;
            cache.push_back(placeLater);
            usingCachedNum ? k++ : j++;
        }
        else {}
    }
}