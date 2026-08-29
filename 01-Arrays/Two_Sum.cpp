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
