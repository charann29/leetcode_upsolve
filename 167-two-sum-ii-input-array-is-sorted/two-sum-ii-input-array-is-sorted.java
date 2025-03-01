class Solution {
    public int[] twoSum(int[] arr, int target) {
        int n = arr.length;
        int i=0,j=n-1;
        while (i<j){
            if((arr[i]+arr[j])==target)return  new int[] {i+1,j+1};
            else if ((arr[i]+arr[j])>target) j--;
            else i++;
        }
        return new int[] {};
    }
}