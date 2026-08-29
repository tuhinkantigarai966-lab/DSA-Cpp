/*
    Insertion Sort

    Approach:
    Build the sorted portion of the array one element
    at a time.

    Take the current element and compare it with the
    elements before it. Shift larger elements one
    position to the right and insert the current
    element into its correct position.

    Time Complexity:
    Best Case: O(n)
    Average Case: O(n^2)
    Worst Case: O(n^2)

    Space Complexity: O(1)
*/

#include <vector>
using namespace std;

void insertionSort(vector<int>& nums) {

    int n = nums.size();

    for (int i = 1; i < n; i++) {

        int key = nums[i];
        int j = i - 1;

        while (j >= 0 && nums[j] > key) {

            nums[j + 1] = nums[j];
            j--;
        }

        nums[j + 1] = key;
    }
}
