class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        def helper(index , curr,total):
            if (len(curr)==k):
                total.append(curr[:])
                return
            for i in range(index,n+1):
                curr.append(i)
                helper(i+1,curr,total)
                curr.pop()
                


        total = []
        helper(1,[],total)
        return total