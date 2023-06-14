class Solution {
public:
    int distinctAverages(vector<int>& nums) {
            int n = nums.size();
            unordered_set<double> averages;

            while (!nums.empty()) {
                int minValue = *min_element(nums.begin(), nums.end());
                int maxValue = *max_element(nums.begin(), nums.end());

                nums.erase(find(nums.begin(), nums.end(), minValue));
                nums.erase(find(nums.begin(), nums.end(), maxValue));

                double avg = (minValue + maxValue) / 2.0;
                averages.insert(avg);
            }

            return averages.size();
    }
};