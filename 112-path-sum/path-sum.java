/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean hasPathSum(TreeNode root, int targetSum) {
        if (root==null) return false; // null node
        if ( root.left == null && root.right ==null) return root.val == targetSum; //leaf
        int remaingSum = targetSum - root.val;
        return hasPathSum(root.left,remaingSum) || hasPathSum(root.right,remaingSum);
 
    }
}