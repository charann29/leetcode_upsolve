class Solution {
public:

 long long findTheArrayConcVal(vector<int>& nums) {

    long long concatenationValue = 0;

    while (!nums.empty()) {
        if (nums.size() > 1) {
            int first = nums[0];
            int last = nums[nums.size() - 1];
            string concat = to_string(first) + to_string(last);
            concatenationValue += stoi(concat);
            nums.erase(nums.begin());
            nums.pop_back();
        } else {
            concatenationValue += nums[0];
            nums.pop_back();
        }
    }

    return concatenationValue;}
};