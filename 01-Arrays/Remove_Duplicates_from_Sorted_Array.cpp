/*
    LeetCode 26 - Remove Duplicates from Sorted Array

    Approach:
    Use two pointers.

    'i' keeps track of the position of the last
    unique element.

    Traverse the array using 'j'. Whenever a new
    unique element is found, place it at the next
    available position.

    Since the array is sorted, duplicate elements
    are next to each other.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.empty()) {
            return 0;
        }

        int i = 0;

        for (int j = 1; j < nums.size(); j++) {

            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};
