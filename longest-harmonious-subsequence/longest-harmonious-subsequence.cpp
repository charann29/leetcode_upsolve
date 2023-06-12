class Solution {
public:
    int findLHS(vector<int>& nums) {
            unordered_map<int, int> freqMap;
            int maxLen = 0;
            
            for (int num : nums) {
                freqMap[num]++;
            }

            for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
                int num = it->first;
                int freq = it->second;

                if (freqMap.count(num + 1) > 0) {
                    int len = freq + freqMap[num + 1];
                    maxLen = max(maxLen, len);
                }
            }

            return maxLen;       
    }
};