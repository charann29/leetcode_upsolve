#include <vector>

class Solution {
public:
    int countGoodRectangles(std::vector<std::vector<int>>& rectangles) {
        int maxLen = 0;
        int count = 0;
        
        for (const auto& rectangle : rectangles) {
            int sideLen = std::min(rectangle[0], rectangle[1]);
            if (sideLen > maxLen) {
                maxLen = sideLen;
                count = 1;
            } else if (sideLen == maxLen) {
                count++;
            }
        }
        
        return count;
    }
};
