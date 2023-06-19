#include <vector>

class Solution {
public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        int maxWealth = 0;

        for (const auto& customer : accounts) {
            int wealth = 0;
            for (int amount : customer) {
                wealth += amount;
            }
            maxWealth = std::max(maxWealth, wealth);
        }

        return maxWealth;
    }
};
