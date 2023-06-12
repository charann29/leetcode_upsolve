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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        getDepth(root, diameter);
        return diameter;
    }

    int getDepth(TreeNode* node, int& diameter) {
        if (node == nullptr)
            return 0;

        int leftDepth = getDepth(node->left, diameter);
        int rightDepth = getDepth(node->right, diameter);

        diameter = max(diameter, leftDepth + rightDepth);

        return 1 + max(leftDepth, rightDepth);
    }
};