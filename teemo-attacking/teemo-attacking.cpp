class Solution {
public:
   int findPoisonedDuration(vector<int>& timeSeries, int duration) {
    int n = timeSeries.size();
    if (n == 0) {
        return 0;
    }
    
    int totalDuration = duration;
    for (int i = 1; i < n; i++) {
        int timeDiff = timeSeries[i] - timeSeries[i - 1];
        totalDuration += min(duration, timeDiff);
    }
    
    return totalDuration;
}

};