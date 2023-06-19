
class Solution {
public:
    int maximumCount(std::vector<int>& nums) {
        int positiveCount = 0;
        int negativeCount = 0;

        for (int num : nums) {
            if (num > 0) {
                positiveCount++;
            } else if (num < 0) {
                negativeCount++;
            }
        }

        return std::max(positiveCount, negativeCount);
    }
};
