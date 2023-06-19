class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int ans = 0;
        for(auto &i: nums)ans = max(ans,i);//FIND MAX LEMENT
        return ans*k+(k*(k-1))/2;
    }
};