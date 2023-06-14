class Solution 
{
    public:
        int minimumOperations(vector<int>& nums) 
        {
            int cnt = 0, N = nums.size();
            sort(nums.begin(), nums.end());

            for(int i=0; i<N; i++)
            {
                if(nums[i] > 0)
                {
                    int num = nums[i];
                    cnt++;
                    for(int j=i; j<N; j++) nums[j] -= num;
                }
            }
            return cnt;
        }
}; 