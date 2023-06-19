#include <vector>
#include <algorithm>

class Solution {
public:
    int findNonMinOrMax(std::vector<int>& nums) {
        int minVal = INT_MAX;
        int maxVal = INT_MIN;
        
        for (int num : nums) {
            minVal = std::min(minVal, num);
            maxVal = std::max(maxVal, num);
        }
        
        for (int num : nums) {
            if (num != minVal && num != maxVal) {
                return num;
            }
        }
        
        return -1;
    }
};
