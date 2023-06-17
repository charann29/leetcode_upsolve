class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> result;
        result.reserve(k);
        // min heap, pair: nums[i], index
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        for (int i = 0; i < nums.size(); i++) {
            // grow the window
            if (i < k) {
                pq.push({nums[i], i});
                continue;
            }

            // nums[i] is greater than the smallest element
            if (nums[i] > pq.top().first) {
                pq.pop();     
                pq.push({nums[i], i});
            }
        }

        // index, nums[i]
        vector<pair<int,int>> v;
        v.reserve(k);
        
        while (!pq.empty()) {
            v.emplace_back(pq.top().second, pq.top().first);
            pq.pop();
        }

        sort(v.begin(), v.end());
        // v.size() will be k, so use k instead
        for (int i = 0; i < k; i++) {
            result.emplace_back(v[i].second);
        }

        return result;
    }
};