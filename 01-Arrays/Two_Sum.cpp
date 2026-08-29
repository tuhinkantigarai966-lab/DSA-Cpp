/*
    LeetCode 1 - Two Sum

    Approach:
    Check every possible pair of elements.
    If the sum of the pair equals the target,
    return their indices.

    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/
#include <vector>
using namespace std;

class Solution {
public:
    // Find two indices whose values add up to target
    vector<int> twoSum(vector<int>& nums, int target) {

        // Compare every pair of elements
        for (int i = 0; i < nums.size(); i++) {

            for (int j = i + 1; j < nums.size(); j++) {

                // Check if the current pair gives the target
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }

        // Return empty vector if no pair is found
        return {};
    }
};
