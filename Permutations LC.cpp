#include <bits/stdc++.h>
using namespace std;
class Solution
{
    vector<vector<int>> ans;

    void recursion(int n, vector<int> &comb, vector<int> &nums)
    {
        if (n == 0)
            ans.push_back(comb);

        for (int i = 0; i < n; i++)
        {
            int temp = nums[i];

            comb.push_back(temp);
            nums.erase(nums.begin() + i);

            recursion(n - 1, comb, nums);

            nums.insert(nums.begin() + i, temp);
            comb.pop_back();
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<int> comb;
        int n = nums.size();
        recursion(n, comb, nums);

        return ans;
    }
};

// ---------------------------------------------------------------------------

// Another Approach!!

class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        perm(nums, 0, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
    void perm(vector<int> &nums, int pos, vector<vector<int>> &ans)
    {
        if (pos >= nums.size())
        {
            ans.push_back(nums);
        }
        for (int i = pos; i < nums.size(); i++)
        {
            swap(nums[i], nums[pos]);
            perm(nums, pos + 1, ans);
            swap(nums[i], nums[pos]);
        }
    }
};