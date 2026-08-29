/*
    LeetCode 704 - Binary Search

    Approach:
    Binary Search works on a sorted array.
    Compare the target with the middle element.

    If the middle element is smaller than the target,
    search in the right half.

    If the middle element is greater than the target,
    search in the left half.

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return -1;
    }
};
