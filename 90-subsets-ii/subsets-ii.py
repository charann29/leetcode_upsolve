class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        def helper(nums ,index,currentList,total):
            n = len(nums)
            if index == n:
                total.append(currentList[:])
                return
            currentList.append(nums[index])
            # print(currentList)
            helper(nums,index+1,currentList,total)
            currentList.pop()
            while index+1 <n and nums[index]==nums[index+1]:
                    index+=1
            helper(nums,index+1,currentList,total)

        total = []
        nums.sort()
        helper(nums,0,[],total)
        return total
           