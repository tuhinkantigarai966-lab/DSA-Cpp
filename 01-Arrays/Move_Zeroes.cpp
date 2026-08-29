/*
    LeetCode 283 - Move Zeroes

    Approach:
    Move all non-zero elements to the beginning
    of the array while maintaining their order.

    After placing all non-zero elements, fill the
    remaining positions with zeroes.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int j = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }

        while (j < nums.size()) {
            nums[j] = 0;
            j++;
        }
    }
};
