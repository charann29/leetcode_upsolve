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
        bool isSubtree(TreeNode* root, TreeNode* subRoot) {
            if (root == NULL) {
                return false;
            } else if (isSameTree(root, subRoot)) {
                return true;
            } else {
                return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
            }
        }

        bool isSameTree(TreeNode* p, TreeNode* q) {
            if (p == NULL && q == NULL) {
                return true;
            } else if (p == NULL || q == NULL) {
                return false;
            } else if (p->val != q->val) {
                return false;
            } else {
                return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
            }
        }
};