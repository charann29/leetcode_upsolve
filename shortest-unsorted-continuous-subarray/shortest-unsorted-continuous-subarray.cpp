class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = n, right = -1;
        
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                left = i;
                break;
            }
        }
        
        if (left == n) {
            return 0; // The array is already sorted
        }
        
        for (int i = n - 1; i > 0; i--) {
            if (nums[i] < nums[i - 1]) {
                right = i;
                break;
            }
        }
        
        int minNum = INT_MAX, maxNum = INT_MIN;
        for (int i = left; i <= right; i++) {
            minNum = min(minNum, nums[i]);
            maxNum = max(maxNum, nums[i]);
        }
        
        for (int i = 0; i < left; i++) {
            if (nums[i] > minNum) {
                left = i;
                break;
            }
        }
        
        for (int i = n - 1; i > right; i--) {
            if (nums[i] < maxNum) {
                right = i;
                break;
            }
        }
        
        return right - left + 1;
    }
};
