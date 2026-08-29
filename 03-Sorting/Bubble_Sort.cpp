/*
    Bubble Sort

    Approach:
    Compare adjacent elements and swap them if they
    are in the wrong order.

    After each pass, the largest unsorted element
    moves to its correct position.

    The swapped flag is used to stop early if the
    array is already sorted.

    Time Complexity:
    Best Case: O(n)
    Average Case: O(n^2)
    Worst Case: O(n^2)

    Space Complexity: O(1)
*/

#include <vector>
using namespace std;

void bubbleSort(vector<int>& nums) {

    int n = nums.size();

    for (int i = 0; i < n - 1; i++) {

        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {

            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}
