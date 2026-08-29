/*
    Merge Sort

    Approach:
    Divide the array into two halves recursively.
    Sort both halves and then merge them together
    in sorted order.

    Merge Sort follows the Divide and Conquer
    technique.

    Time Complexity:
    Best Case: O(n log n)
    Average Case: O(n log n)
    Worst Case: O(n log n)

    Space Complexity: O(n)
*/

#include <vector>
using namespace std;

void merge(vector<int>& nums, int left, int mid, int right) {

    int i = left;
    int j = mid + 1;
    int k = 0;

    vector<int> temp(right - left + 1);

    while (i <= mid && j <= right) {

        if (nums[i] <= nums[j]) {
            temp[k] = nums[i];
            i++;
        }
        else {
            temp[k] = nums[j];
            j++;
        }

        k++;
    }

    while (i <= mid) {
        temp[k] = nums[i];
        i++;
        k++;
    }

    while (j <= right) {
        temp[k] = nums[j];
        j++;
        k++;
    }

    for (int x = 0; x < temp.size(); x++) {
        nums[left + x] = temp[x];
    }
}

void mergeSort(vector<int>& nums, int left, int right) {

    if (left >= right) {
        return;
    }

    int mid = left + (right - left) / 2;

    mergeSort(nums, left, mid);
    mergeSort(nums, mid + 1, right);

    merge(nums, left, mid, right);
}
