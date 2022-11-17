#include <bits/stdc++.h>
using namespace std;
unordered_map<string, int> m;
int dfs(string s)
{
    if (!s.size())
        return 0;

    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        string x = s.substr(0, i + 1); // ith pos tak ki substring lo

        if (m.find(x) != m.end())                     // check if x in 'words' (fast search through map)
            ans = max(ans, 1 + dfs(s.substr(i + 1))); // if present 1+dfs(i+1)
    }

    // agar ans 0 hai mtlb koi b substr map me nahi present to invalid condition return INT_MIN
    return ans == 0 ? INT_MIN : ans;
}
vector<string> findAllConcatenatedWordsInADict(vector<string> &words)
{

    for (auto i : words) // map me search kralo for O(1) search
        m[i]++;

    vector<string> ans;
    for (auto s : words)
    {
        if (dfs(s) >= 2)      // if dfs(s)>=2 yaani 2 se zda words se milke bna hai ye word
            ans.push_back(s); // add it in ans
    }
    return ans;
}
// --------------------------------------------------------------------------------------------------------------------------------------