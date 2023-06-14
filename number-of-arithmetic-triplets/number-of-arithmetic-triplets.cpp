class Solution{
public :
int arithmeticTriplets(vector<int>& nums, int diff) {
    int ans = 0 ;
  
    for(int i=0 ;i<nums.size()-2 ;i++){
        int count = 0 ;
        for(int j=i+1 ; j<nums.size() ;j++){
             
            if(nums[j]-nums[i]==diff || nums[j]-nums[i]==2*diff){
                count++;
            }
        }
        if(count==2){
            ans++;
        }
    }
    return ans ;
}
};