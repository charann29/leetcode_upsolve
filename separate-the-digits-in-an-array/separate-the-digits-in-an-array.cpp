#include <vector>

class Solution {
public:
    std::vector<int> separateDigits(std::vector<int>& nums) {
        std::vector<int> answer;
        for (int num : nums) {
            std::string numString = std::to_string(num);
            for (char ch : numString) {
                answer.push_back(ch - '0');
            }
        }
        return answer;
    }
};
