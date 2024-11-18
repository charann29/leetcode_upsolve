class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        i =0 # first pointer
        j =0 # second pointer
        res = []
        while i<m and j <n:
            if nums1[i]<=nums2[j]:
                res.append(nums1[i])
                i+=1
            else:
                res.append(nums2[j])
                j+=1

        while i<m:
            res.append(nums1[i])
            i+=1
        while j<n:
            res.append(nums2[j])
            j+=1
        for i in range(0,(m+n)):
            nums1[i] = res[i]


        
