#include <vector>

std::vector<std::vector<int>> test_piles = {
    {3, 6, 7, 11},
    {30, 11, 23, 4, 20},
    {30, 11, 23, 4, 20}
};

std::vector<int> test_h = {
    8,  // piles = [3, 6, 7, 11]
    5,  // piles = [30, 11, 23, 4, 20]
    6   // piles = [30, 11, 23, 4, 20]
};

// Expected outputs:
// 1) 4
// 2) 30
// 3) 23
