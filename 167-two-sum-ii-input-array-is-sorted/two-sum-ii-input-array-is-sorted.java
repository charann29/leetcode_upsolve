class Solution {
    public int[] twoSum(int[] nums, int t) {
        int n = nums.length;
        int left = 0,right =n-1;
        while(left<=right){
            if((nums[left]+nums[right])==t){
                return new int[] {left+1,right+1};
            }
            else if ((nums[left]+nums[right])<t) left++;
            else right--;
        }
        return new int[]{};
    }
}