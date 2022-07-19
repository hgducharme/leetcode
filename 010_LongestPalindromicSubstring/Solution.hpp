#pragma once

#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    int longestPalindromeLength = 0;
    string palindrome = "";

    void main();
    string longestPalindrome(string str);
    string searchForPalindrome(string str, int left, int right);
    void updateResults(string str);
};