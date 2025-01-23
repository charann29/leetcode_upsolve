class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
    
        def helper(nums ,i,currentList,total):
            n = len(nums)
            if i == n:
                total.append(currentList[:])
                return
            helper(nums, i+1,currentList,total)
            currentList.append(nums[i])
            helper(nums, i+1,currentList,total)
            currentList.pop()
        
        total = []
    
        helper(nums,0,[],total)
        return total
        