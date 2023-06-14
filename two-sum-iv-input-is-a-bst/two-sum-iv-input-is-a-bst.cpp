/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> nums;
        return findTargetHelper(root, k, nums);
    }

    bool findTargetHelper(TreeNode* node, int k, unordered_set<int>& nums) {
        if (node == NULL)
            return false;

        if (nums.count(k - node->val) > 0)
            return true;

        nums.insert(node->val);

        return findTargetHelper(node->left, k, nums) || findTargetHelper(node->right, k, nums);
    }
};