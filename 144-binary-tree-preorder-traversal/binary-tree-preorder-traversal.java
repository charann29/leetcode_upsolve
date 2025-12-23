
class Solution {
        public void helper(TreeNode root,List<Integer> res){
        if(root==null)return;
        if(root.left==null && root.right==null){
                res.add(root.val);
                return;
        }
         res.add(root.val);
        helper(root.left,res);

        helper(root.right,res);
       
    }
    public List<Integer> preorderTraversal(TreeNode root) {
        
                List<Integer> res = new ArrayList<>();
        helper(root,res);
        return res;
    }
}