#include <iostream>
#include "bananas.h"

// bring in test data
extern std::vector<std::vector<int>> test_piles;
extern std::vector<int> test_h;

int main() {
    bananas sol;

    for (size_t i = 0; i < test_piles.size(); ++i) {
        int result = sol.min_eating_speed(test_piles[i], test_h[i]);
        std::cout << "Test Case " << i + 1 << ":\n";
        std::cout << "Piles = [ ";
        for (auto p : test_piles[i]) {
            std::cout << p << " ";
        }
        std::cout << "], h = " << test_h[i] << "\n";
        std::cout << "Minimum Eating Speed = " << result << "\n\n";
    }

    return 0;
}
