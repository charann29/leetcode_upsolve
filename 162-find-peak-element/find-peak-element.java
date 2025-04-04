class Solution {
    public int findPeakElement(int[] nums) {
        int n = nums.length;
        if(n==1)return 0; // only one element
        if(nums[0]>nums[1])return 0;
        if(nums[n-1]>nums[n-2])return n-1; // if extremes are peaks
        for(int i =1 ;i<=n-2;i++){
            if(nums[i]>nums[i+1] && nums[i]>nums[i-1])return i;
        } // more than two elements and both the extremes or not peaks
        return 0;
    }
}