# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def __init__(self):
        self.totalSum = 0 # global varaible

    def helper(self,root,ans):
        if not root :  #no node
            return 0
        if not root.left and not root.right: # leaf node 
            ans = (ans*10)+root.val
            self.totalSum = self.totalSum+ans
        else :       # node in between
           ans = (ans*10)+root.val
           self.helper(root.left,ans)
           self.helper(root.right,ans)
        return self.totalSum 

    def sumNumbers(self, root: Optional[TreeNode]) -> int:
        ans = 0
        return self.helper(root,ans)




       
        # currentSum =0
        # return self.dfs(root,currentSum)




        