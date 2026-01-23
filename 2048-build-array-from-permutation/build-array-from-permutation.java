class Solution {
    public int[] buildArray(int[] nums) {
        int[] alpha = new int[nums.length];

        for( int i=0;i<nums.length;i++){
            alpha[i]= nums[nums[i]];
        }
        return alpha;
    }
}