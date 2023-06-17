class Solution {
public:
    std::vector<std::vector<int>> levelOrderBottom(TreeNode* root) {
        std::vector<std::vector<int>> result;
        if (root == nullptr) {
            return result;
        }
        
        std::queue<TreeNode*> q;
        std::stack<std::vector<int>> s;
        q.push(root);
        
        while (!q.empty()) {
            int size = q.size();
            std::vector<int> level;
            
            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node->val);
                
                if (node->left) {
                    q.push(node->left);
                }
                
                if (node->right) {
                    q.push(node->right);
                }
            }
            
            s.push(level);
        }
        
        while (!s.empty()) {
            result.push_back(s.top());
            s.pop();
        }
        
        return result;
    }
};