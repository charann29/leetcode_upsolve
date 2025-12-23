
class Solution {
    private int maxDiameter=0;
    public int height(TreeNode root){
        if(root==null) return 0;
        int leftHeight = height(root.left);
        int rightHeight= height(root.right);
        maxDiameter= Math.max(maxDiameter,leftHeight+rightHeight);
        return Math.max(leftHeight,rightHeight)+1;
    }


    public int diameterOfBinaryTree(TreeNode root) {
        if(root==null)return 0;
        height(root);
        return maxDiameter;
    }
}



