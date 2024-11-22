# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def countNodes(self, root: Optional[TreeNode]) -> int:
        #base conditions : empty node , leaf node
        if not root:
            return 0
        if not root.right and not root.left: #left and right nodes are not there : leaf4
            return 1
        return self.countNodes(root.left)+self.countNodes(root.right)+1



        
        
        