class Solution:
    def search(self, arr: List[int], target: int) -> int:
        if(len(arr)==1):
            if arr[0]==target:
                return 0
            else:
                return -1
        l , r= 0,len(arr)-1
        while l<=r:
            mid = (l+r)>>1
            if arr[mid]==target:
                return mid
            #left sorted array
            if arr[l]<=arr[mid]:
                if arr[l] <= target and target<=arr[mid]:
                    r = mid-1
                else:
                    l = mid+1
            # right sorted array    
            else:
                if arr[mid]<= target and target<= arr[r]:
                    l = mid+1
                else:
                    r = mid-1
        return -1
            



        
        