# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
        seen = set()

        def helper( node):
            if(not node):
                 return False
            else:
                if(k-node.val in seen ):
                    return True
            seen.add(node.val )
            return helper(node.left) or helper(node.right)

            
        return helper( root)
        