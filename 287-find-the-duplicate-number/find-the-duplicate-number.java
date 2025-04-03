class Solution {
    public int findDuplicate(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums); //n*logn
        for(int i=1;i<n;i++){ //n
            if(nums[i]==nums[i-1])return nums[i];
        }


    return 0;
        
    }
}
