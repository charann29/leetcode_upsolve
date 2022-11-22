#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int answer;
    int maxPathSum(TreeNode *root)
    {
        answer = INT_MIN;
        fun(root);
        return answer;
    }
    int fun(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int x = fun(root->right);
        int y = fun(root->left);
        answer = max(answer, x + y + root->val);
        return max(max(x, y) + root->val, 0);
    }
};