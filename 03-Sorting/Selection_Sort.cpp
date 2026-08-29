/*
    Selection Sort

    Approach:
    Find the smallest element in the unsorted part
    of the array and place it at the beginning.

    After each pass, one element is placed in its
    correct position.

    Time Complexity:
    Best Case: O(n^2)
    Average Case: O(n^2)
    Worst Case: O(n^2)

    Space Complexity: O(1)
*/

#include <vector>
#include <utility>
using namespace std;

void selectionSort(vector<int>& nums) {

    int n = nums.size();

    for (int i = 0; i < n - 1; i++) {

        int minIndex = i;

        for (int j = i + 1; j < n; j++) {

            if (nums[j] < nums[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(nums[i], nums[minIndex]);
        }
    }
}
