class Solution {
public:
    void recoverTree(TreeNode* root) {
        vector<int> sol;

        TreeNode *first = nullptr, *last = nullptr, *prev = nullptr, *curr = root;

        stack<TreeNode*> st;
        bool isDone = false;

        while (!isDone) {
            if (curr != nullptr) {
                st.push(curr);
                curr = curr->left;
            } else {
                if (!st.empty()) {
                    curr = st.top();
                    st.pop();
                    if (prev != nullptr) {
                        if (prev->val > curr->val) {
                            if (first == nullptr) {
                                first = prev;
                            }
                            last = curr;
                        }
                    }
                    prev = curr;
                    curr = curr->right;
                } else {
                    isDone = true;
                }
            }
        }

        sol.push_back(first->val);
        sol.push_back(last->val);

        sort(sol.begin(), sol.end());

        first->val = sol[0];
        last->val = sol[1];
    }
};