class Solution {
public:

    public: int peakIndexInMountainArray(vector<int>&arr) {
        int s = 0;
        int e = arr.size()-1;
        while(s < e){
            int mid = s - ( s - e)/2;
            int mid2 = mid+1;
            if(arr[mid] < arr[mid2]) {
                s = mid2;
            }else {
                e = mid;
            }
            
        }
        return s;
    }

};