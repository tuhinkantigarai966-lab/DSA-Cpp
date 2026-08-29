/*
    LeetCode 27 - Remove Element

    Approach:
    Traverse the array and keep only the elements
    that are different from the given value.

    'k' represents the position where the next
    valid element should be placed.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int k = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
