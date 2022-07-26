#include "Solution.hpp"

std::vector<int> Solution::intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::vector<int> intersection;
    std::map<int, std::vector<int>> seenNumbers;

    // Store all the elements in num1 into a map with their frequency
    for (int i = 0; i < nums1.size(); i++) {
        int number = nums1[i];
        if (seenNumbers.count(number)) {
            seenNumbers[number][0] += 1;
        }
        else {
            seenNumbers.insert({number, {1, 0}});
        }
    }

    // Add only the frequency of intersected elements to seenNumbers
    for (int i = 0; i < nums2.size(); i++) {
        int number = nums2[i];
        if (seenNumbers.count(number)) {
            seenNumbers[number][1] += 1;
        }
    }

    // Write all the intersected numbers to the resulting vector
    for (auto const& [number, numberOfOccurances] : seenNumbers) {
        int numberOfIntersections = std::min(numberOfOccurances[0], numberOfOccurances[1]);
        for (int i = 0; i < numberOfIntersections; i++) {
            intersection.push_back(number);
        }
    }

    return intersection;
}