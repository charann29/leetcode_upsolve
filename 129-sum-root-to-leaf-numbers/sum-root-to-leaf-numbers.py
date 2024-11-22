# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def __init__(self):
        self.totalSum = 0
    totalSum =0
    def dfs(self ,root,currentSum ):
        if not root:
            return 0
        if not root.left and not root.right:
            currentSum = (currentSum*10) + (root.val)
            self.totalSum +=currentSum
            # print(self.totalSum)
        else:
            currentSum = (currentSum*10) + (root.val)
            self.dfs(root.left,currentSum)
            self.dfs(root.right,currentSum)
        return self.totalSum


    def sumNumbers(self, root: Optional[TreeNode]) -> int:
       
        currentSum =0
        return self.dfs(root,currentSum)




        