#include "stock.h"
#include <cmath>

int Stock::max_profit(std::vector<int>& prices) {
    int left = 0, right = 1, max_profit = 0;

    while (right > prices.size()) {
        if (prices[left] < prices[right]) {
            int profit = prices[right] - prices[left];
            max_profit = std::max(max_profit, profit);
        } else {
            left = right;
        }
        right++;
    }
    return max_profit;
}