class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> freq;

        // Count the frequency of each number
        for (int num : nums) {
            freq[num]++;
        }

        // Calculate the number of good pairs
        for (const auto& pair : freq) {
            int freqCount = pair.second;
            count += (freqCount * (freqCount - 1)) / 2;
        }

        return count;
    }
};
