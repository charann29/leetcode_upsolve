class Solution {
public:
int firstMissingPositive(vector<int>& nums) {
    int n = nums.size();

    // Step 1: Rearrange the array
    for (int i = 0; i < n; i++) {
        // Swap the number at nums[i] to its correct position
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            swap(nums[i], nums[nums[i] - 1]);
        }
    }

    // Step 2: Find the smallest missing positive integer
    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }

    // Step 3: If all numbers from 1 to n are present, return n+1
    return n + 1;
}
};