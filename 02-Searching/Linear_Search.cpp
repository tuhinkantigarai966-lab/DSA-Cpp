/*
    Linear Search

    Approach:
    Traverse the array from left to right.
    Compare each element with the target.

    If the target is found, return its index.
    Otherwise, return -1.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <vector>
using namespace std;

int linearSearch(vector<int>& nums, int target) {

    for (int i = 0; i < nums.size(); i++) {

        if (nums[i] == target) {
            return i;
        }
    }

    return -1;
}
