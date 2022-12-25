
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    
public:
    //C++20: int maxJump(span<const int> stones) const ...
    int maxJump(const vector<int>& stones) const {
        int minCost = stones[1];
        for (size_t i = 1; i < stones.size() - 1; ++i) {
            minCost = max(minCost, stones[i + 1] - stones[i - 1]);
        }
        return minCost;
    }
};
