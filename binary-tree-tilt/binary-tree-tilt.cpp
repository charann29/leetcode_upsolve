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
        int calculateSum(TreeNode* node) {
            if (node == nullptr) {
                return 0;
            }
            return node->val + calculateSum(node->left) + calculateSum(node->right);
        }

        int calculateTilt(TreeNode* node) {
            if (node == nullptr) {
                return 0;
            }
            int leftSum = calculateSum(node->left);
            int rightSum = calculateSum(node->right);
            int tilt = abs(leftSum - rightSum);
            return tilt + calculateTilt(node->left) + calculateTilt(node->right);
        }

        int findTilt(TreeNode* root) {
            return calculateTilt(root);
        }

};