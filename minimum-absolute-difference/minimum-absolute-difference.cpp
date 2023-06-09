class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    vector<vector<int>> result;
    int n = arr.size();
    
    sort(arr.begin(), arr.end());
    
    int minDiff = arr[1] - arr[0];
    for (int i = 1; i < n; i++) {
        minDiff = min(minDiff, arr[i] - arr[i - 1]);
    }
    
    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] == minDiff) {
            result.push_back({arr[i - 1], arr[i]});
        }
    }
    
    return result;
}

};