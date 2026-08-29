/*
    LeetCode 1470 - Shuffle the Array

    Approach:
    The array contains two halves:

    [x1, x2, ..., xn, y1, y2, ..., yn]

    We need to rearrange it as:

    [x1, y1, x2, y2, ..., xn, yn]

    Use a new vector and place elements from both
    halves at their required positions.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> result(2 * n);

        for (int i = 0; i < n; i++) {

            result[2 * i] = nums[i];
            result[2 * i + 1] = nums[n + i];
        }

        return result;
    }
};
