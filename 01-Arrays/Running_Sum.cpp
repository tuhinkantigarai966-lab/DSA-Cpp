/*
    LeetCode 1480 - Running Sum of 1d Array

    Approach:
    Keep a running sum while traversing the array.

    For every element, add the previous running sum
    to the current element.

    Example:
    [1, 2, 3, 4]

    [1, 3, 6, 10]

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        for (int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i] + nums[i - 1];
        }

        return nums;
    }
};
