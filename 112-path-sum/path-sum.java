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
        
        if(root==null) return false; // if the root itself is null then return false.

        if ( root.left ==null && root.right == null) return root.val == targetSum; // checking whtherr can wee fill the
        // target value with our leaf node or not

        return hasPathSum (root.left , targetSum - root.val) || hasPathSum (root.right , targetSum - root.val) ;

    }
}