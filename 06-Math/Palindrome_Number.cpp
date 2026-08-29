/*
    LeetCode 9 - Palindrome Number

    Approach:
    Reverse the digits of the number and compare
    the reversed number with the original number.

    A number is a palindrome if it reads the same
    from left to right and right to left.

    Negative numbers are not considered palindromes.

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) {
            return false;
        }

        int original = x;
        long long reversed = 0;

        while (x > 0) {

            int digit = x % 10;

            reversed = reversed * 10 + digit;

            x = x / 10;
        }

        return original == reversed;
    }
};
