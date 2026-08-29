/*
    LeetCode 121 - Best Time to Buy and Sell Stock

    Approach:
    Keep track of the minimum price seen so far.
    For each price, calculate the profit if we sell
    on that day.

    Update the maximum profit whenever a better
    profit is found.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {

            minPrice = min(minPrice, prices[i]);

            maxProfit = max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
    }
};
