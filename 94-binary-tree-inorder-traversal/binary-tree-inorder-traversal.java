
class Solution {
    public void helper(TreeNode root,List<Integer> res){
        if(root==null)return;
        if(root.left==null && root.right==null){
                res.add(root.val);
                return;
        }

        helper(root.left,res);
         res.add(root.val);
        helper(root.right,res);
       
    }

    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> res = new ArrayList<>();
        helper(root,res);
        return res;
        
    }
}