class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        
        // Iterate through all indices and sum the values where the index has k set bits
        for (int i = 0; i < n; ++i) {
            if (__builtin_popcount(i) == k) {
                sum += nums[i];
            }
        }
        
        return sum;
    }
};
