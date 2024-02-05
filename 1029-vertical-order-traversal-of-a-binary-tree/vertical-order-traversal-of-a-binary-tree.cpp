class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,multiset<pair<int,int>>>mp;
        traverse(root,0,0,mp);
        vector<vector<int>>ans;
        for(auto &[x,st]:mp){
          ans.push_back({});
          for(auto& [y,val]: st) ans.back().push_back(val);
        }
        return ans;
    }
    void traverse(TreeNode* root,int x,int y, map<int,multiset<pair<int,int>>>&mp){
        if(!root) return ;
        mp[x].insert({y,root->val});
        traverse(root->left,x-1,y+1,mp);
        traverse(root->right,x+1,y+1,mp);
      }
};