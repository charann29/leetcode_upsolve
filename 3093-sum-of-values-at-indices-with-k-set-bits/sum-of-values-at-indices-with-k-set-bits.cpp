class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        
        for (int i = 0; i < n; ++i) {
            if (countSetBits(i) == k) {
                sum += nums[i];
            }
        }
        
        return sum;
    }

private:
    int countSetBits(int n) {
        int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }
};
