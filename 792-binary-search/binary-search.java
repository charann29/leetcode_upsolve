class Solution {
    public int search(int[] arr, int target) {
     int n = arr.length;
     if(n==1){
        if(arr[0]==target)return 0;
        else return -1;

     } 
     int l = 0 , r =n-1;
     while(l<=r){
        int mid = (l+r)>>1;
        if(arr[mid]==target)return mid;
        else if(arr[mid]>target) r=mid-1;
        else l = mid+1;
     } 
     return -1;  
    }
}