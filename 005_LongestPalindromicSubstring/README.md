# Longest Palindromic Substring

## Problem Type

Dynamic Programming

## Solution description

1. Iterate through the string

2. Consider the character the center of either an odd- or even-lengthed palindrome
    
    a. For odd-lengthed palindromes, the center is a single character
    
    b. For even-lengthed palindromes, the center is defined by two characters

3. Maintain an index for the center of the palindrome

    a. This will be one index for the center of odd-lengthed palindromes

    b. This will be two indexes for the center of even-lengthed palindromes

4. While the indexes are within the bounds of the string, check if the left and right characters equal each other. If they do, continue moving the left and right index outwards until we find characters that don't match each other.

5. From the resulting indexes, we know the starting point of the palindrome and the ending point of the palindrome