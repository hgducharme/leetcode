#include "Solution.hpp"

void Solution::main() {
    int i = 1;
}

string Solution::longestPalindrome(string str) {
    int stringLength = str.length();

    if (stringLength == 0) return "";
    if (stringLength == 1) return str;
    
    for (int i = 0; i < str.length(); i++) {
        /* This will find the length of a palindrome of odd length */
        string & oddLengthPalindrome = searchForPalindrome(str, i, i);
        updateResults(oddLengthPalindrome);

        /* This will find the length of a palindrome of even length */
        string & evenLengthPalindrome = searchForPalindrome(str, i, i+1);
        updateResults(evenLengthPalindrome);
    }
    
    return palindrome;
}

string & Solution::searchForPalindrome(string & str, int left, int right) {
    while (left >= 0 && right < str.length() && str[left] == str[right]) {
        cout << "str[left] = " << str[left] << " = str[right] = " << str[right] << std::endl;
        left--;
        right++;
    }
    

    int length = right - left - 1;
    
    cout << "Found palindrome of length " << length << "starting at position " << left << std::endl;
    string foundPalindrome = str.substr(left, length);

    return foundPalindrome;
}

void Solution::updateResults(string & str) {
    if (str.length() > longestPalindromeLength) {
        longestPalindromeLength = str.length();
        palindrome.assign(str);
    }
}