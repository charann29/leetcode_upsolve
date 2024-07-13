class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        
        // Precompute the number of set bits for all possible indices
        vector<int> bitCounts(1 << 20, 0); // Assuming nums.size() <= 2^20 for practicality
        for (int i = 1; i < (1 << 20); ++i) {
            bitCounts[i] = bitCounts[i >> 1] + (i & 1);
        }
        
        // Iterate through all indices and sum the values where the index has k set bits
        for (int i = 0; i < n; ++i) {
            if (bitCounts[i] == k) {
                sum += nums[i];
            }
        }
        
        return sum;
    }
};
