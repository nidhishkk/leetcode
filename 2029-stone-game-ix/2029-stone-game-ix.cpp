#include <vector>
#include <cmath>

class Solution {
public:
    bool stoneGameIX(std::vector<int>& stones) {
        int cnt[3] = {0, 0, 0};
        for (int x : stones) {
            cnt[x % 3]++;
        }
        if (cnt[0] % 2 == 0) {
            return cnt[1] >= 1 && cnt[2] >= 1;
        }
        return std::abs(cnt[1] - cnt[2]) > 2;
    }
};