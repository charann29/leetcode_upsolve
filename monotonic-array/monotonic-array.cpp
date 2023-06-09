class Solution {
public:
bool isMonotonic(vector<int>& nums) {
    int n = nums.size();
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < n; i++) {
        if (nums[i] > nums[i - 1]) {
            decreasing = false;
        } else if (nums[i] < nums[i - 1]) {
            increasing = false;
        }
    }

    return increasing || decreasing;
}

};