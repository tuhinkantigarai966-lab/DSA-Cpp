/*
    LeetCode 217 - Contains Duplicate

    Approach:
    Use a set to keep track of the elements
    that have already been seen.

    Traverse the array:
    - If the current element already exists in the set,
      a duplicate is found.
    - Otherwise, insert the element into the set.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        set<int> seen;

        for (int i = 0; i < nums.size(); i++) {

            if (seen.find(nums[i]) != seen.end()) {
                return true;
            }

            seen.insert(nums[i]);
        }

        return false;
    }
};
