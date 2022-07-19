#include <string>
#include <iostream>
#include "Solution.hpp"

int main() {
    Solution solution;
    std::string testCase = "abba";

    solution.longestPalindrome(testCase);

    std::cout << "Longest palindrome: " << solution.palindrome << std::endl;

    return 0;
}