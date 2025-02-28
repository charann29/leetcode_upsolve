class Solution {
    public int maxArea(int[] height) {
        int n = height.length;
        int maxi =0;
        int left = 0,right=n-1;
        while(left<=right){
            maxi =Math.max( maxi , Math.min(height[left],height[right])*(right-left));
            // System.out.println(left+" "+right+" "+maxi);
            if ( height[left]<height[right])left++;
            else right--;
        }
        return maxi;
        
    }
}