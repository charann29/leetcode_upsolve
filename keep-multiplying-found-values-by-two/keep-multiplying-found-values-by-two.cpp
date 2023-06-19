class Solution {
public:
int findFinalValue(std::vector<int>& nums, int original) {
    while (std::find(nums.begin(), nums.end(), original) != nums.end()) {
        original *= 2;
    }
    return original;
}

};