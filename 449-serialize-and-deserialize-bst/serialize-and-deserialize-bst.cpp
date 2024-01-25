/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s="";
        if(!root){
            return s;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            if(!node){
                s+="#,";
            }
            else{
                s+=to_string(node->val)+',';
                q.push(node->left);
                q.push(node->right);
            }
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.empty()){return NULL;}
        string s="";
        stringstream x(data);
        getline(x, s, ',');
        TreeNode* root=new TreeNode(stoi(s));
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            getline(x, s, ',');
            if(s=="#"){
                node->left=NULL;
            }
            else{
                TreeNode* lft=new TreeNode(stoi(s));
                node->left=lft;
                q.push(lft);
            }
            getline(x, s, ',');
            if(s=="#"){
                node->right=NULL;
            }
            else{
                TreeNode* rgt=new TreeNode(stoi(s));
                node->right=rgt;
                q.push(rgt);
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;