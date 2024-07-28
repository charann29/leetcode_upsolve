class Solution {
public:
    int largestPerimeter(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int x = nums.size();

        // congruence of traingles = 10th class

        for( int i = x-3;i>=0;i-- ){
            if((nums[i]+nums[i+1]) > nums[i+2]) return nums[i]+nums[i+1]+nums[i+2];
        }

        return 0;
        
    }
};



// ac+bc > ac  # sum of two sides is greater than third side 
// only then we can form a triangle with these lengths