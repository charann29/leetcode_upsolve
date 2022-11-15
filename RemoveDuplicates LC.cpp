// Using a vector -cpp stl single linear property :

// Unique function in vector keeps all unique element at front part of an array and then have random values to fill the remaining array. It returns the iterator where unique elements end.So substracting nums.begin from it will give answer
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        return unique(nums.begin(), nums.end()) - nums.begin();
    }
};
// -----------------------------------------------------------------------------

// Using a for loop implementing two pointers simul..

int removeDuplicates(vector<int> &nums)
{
    int j = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        nums[j] = nums[i];
        if (nums[j - 1] != nums[j])
            j++;
    }
    return j;
}
//  In simple Understanding way!

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int k = 1;
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
