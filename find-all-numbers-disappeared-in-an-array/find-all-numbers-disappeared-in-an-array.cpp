class Solution {
public:
vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> result;

    // Iterate over each number in the array
    for (int i = 0; i < nums.size(); i++) {
        // Get the absolute value of the current number minus 1
        int idx = abs(nums[i]) - 1;

        // If the number at the computed index is positive, negate it
        if (nums[idx] > 0) {
            nums[idx] = -nums[idx];
        }
    }

    // Iterate over the array again and find the positive numbers
    for (int i = 0; i < nums.size(); i++) {
        // If a number is positive, it means its corresponding index + 1 is missing
        if (nums[i] > 0) {
            result.push_back(i + 1);
        }
    }

    return result;
}

};