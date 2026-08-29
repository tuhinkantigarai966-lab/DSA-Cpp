/*
    LeetCode 977 - Squares of a Sorted Array

    Approach:
    The array is sorted, but negative numbers can have
    larger squares than positive numbers.

    Use two pointers:
    - 'left' starts at the beginning.
    - 'right' starts at the end.

    Compare the absolute values at both pointers.
    Place the larger square at the end of the result
    array and move the corresponding pointer.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();

        vector<int> result(n);

        int left = 0;
        int right = n - 1;

        for (int i = n - 1; i >= 0; i--) {

            if (nums[left] * nums[left] > nums[right] * nums[right]) {
                result[i] = nums[left] * nums[left];
                left++;
            }
            else {
                result[i] = nums[right] * nums[right];
                right--;
            }
        }

        return result;
    }
};
