/*
    LeetCode 344 - Reverse String

    Approach:
    Use the Two Pointer technique.

    One pointer starts from the beginning of the string
    and another pointer starts from the end.

    Swap the characters at both pointers and move them
    towards the center.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
    }
};
