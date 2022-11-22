#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  vector<int> diStringMatch(string s)
  {
    int n = s.length();
    int maxi = n;
    int mini = 0;
    vector<int> ans;
    for (int i = 0; i <= s.length(); i++)
    {
      if (s[i] == 'D')
        ans.push_back(maxi--);
      else
        ans.push_back(mini++);
    }
    return ans;
  }
};