#include "bananas.h"
#include <algorithm>
#include <cmath>
#include <climits>

/*
 * @params: h is the minimum number of hours needed to eat all the bananas
 */
int bananas::min_eating_speed(std::vector<int>& piles, int h) {
    int left = 1;
    int right = *max_element(piles.begin(), piles.end()); // O(n) time complexity
    int result = right;

    while (left <= right) {
        int mid = (left + right) / 2;

        long long time_elapsed = 0;
        for (int pile : piles) {
            time_elapsed += ceil(static_cast<double>(pile) / mid);
        }
        if (time_elapsed <= h) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return result;
}
