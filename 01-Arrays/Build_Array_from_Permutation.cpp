/*
    LeetCode 1920 - Build Array from Permutation

    Approach:
    For every index i, the required value is nums[nums[i]].

    Create a result array and store the calculated
    value at the corresponding index.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {

        int n = nums.size();

        vector<int> result(n);

        for (int i = 0; i < n; i++) {
            result[i] = nums[nums[i]];
        }

        return result;
    }
};
