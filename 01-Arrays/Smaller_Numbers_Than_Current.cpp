/*
    LeetCode 1365 - How Many Numbers Are Smaller
    Than the Current Number

    Approach:
    For each element, compare it with every other
    element in the array.

    Count how many elements are smaller than the
    current element.

    Store the count at the same index in the result
    array.

    Time Complexity: O(n^2)
    Space Complexity: O(n)
*/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        int n = nums.size();

        vector<int> result(n);

        for (int i = 0; i < n; i++) {

            int count = 0;

            for (int j = 0; j < n; j++) {

                if (nums[j] < nums[i]) {
                    count++;
                }
            }

            result[i] = count;
        }

        return result;
    }
};
