#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        unordered_map<int, int> valueWeight;
        
        for (const auto& item : items1) {
            valueWeight[item[0]] += item[1];
        }
        
        for (const auto& item : items2) {
            valueWeight[item[0]] += item[1];
        }
        
        vector<pair<int, int>> sortedValues(valueWeight.begin(), valueWeight.end());
        sort(sortedValues.begin(), sortedValues.end());
        
        vector<vector<int>> result;
        for (const auto& pair : sortedValues) {
            result.push_back({pair.first, pair.second});
        }
        
        return result;
    }
};
