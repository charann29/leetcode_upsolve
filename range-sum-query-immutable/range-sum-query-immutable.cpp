class NumArray {
public:
private:
    vector<int> pS;

public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        pS.resize(n + 1, 0);

        // Compute prefix sums
        for (int i = 1; i <= n; i++) {
            pS[i] = pS[i - 1] + nums[i - 1];
        }
    }

    int sumRange(int left, int right) {
        return pS[right + 1] - pS[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */