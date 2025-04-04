class Solution {
    public int findPeakElement(int[] arr) {
        int n = arr.length;
        int l =0,r=n-1;
        while(l<r){
            int mid = (l+r)>>1;
            if(arr[mid]<arr[mid+1])l = mid+1;
            else r = mid;
        }
        return l;
    }
}