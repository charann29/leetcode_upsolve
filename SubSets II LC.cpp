#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void solve(int ind, vector<int> &nums, vector<int> &path, vector<vector<int>> &paths)
    {
        paths.push_back(path);

        for (int i = ind; i < nums.size(); i++)
        {
            if (i != ind and nums[i] == nums[i - 1])
                continue; // To avoid duplicate subsets

            path.push_back(nums[i]);
            solve(i + 1, nums, path, paths);
            path.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> paths;
        vector<int> path;
        sort(nums.begin(), nums.end()); // sorting is most important --- so that order of duplicate subsets is same
        solve(0, nums, path, paths);    // [1,4,4] == [4,1,4] , both are same so no need to include both in answer
        return paths;
    }
};