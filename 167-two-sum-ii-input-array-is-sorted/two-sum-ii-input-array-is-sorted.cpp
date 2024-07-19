class Solution {
public:

std::vector<int> twoSum(const std::vector<int>& numbers, int target) {
    int left = 0;
    int right = numbers.size() - 1;

    while (left < right) {
        int sum = numbers[left] + numbers[right];
        if (sum == target) {
            return {left + 1, right + 1};  // Convert to 1-indexed
        } else if (sum < target) {
            ++left;
        } else {
            --right;
        }
    }

    return {};  // This line should never be reached because there's exactly one solution
}
};