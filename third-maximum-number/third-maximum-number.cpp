class Solution {
public:
int thirdMax(vector<int>& nums) {
    set<int> distinctNums;

    for (int num : nums) {
        distinctNums.insert(num);

        if (distinctNums.size() > 3) {
            distinctNums.erase(distinctNums.begin());
        }
    }

    return (distinctNums.size() == 3) ? *distinctNums.begin() : *distinctNums.rbegin();
}

};