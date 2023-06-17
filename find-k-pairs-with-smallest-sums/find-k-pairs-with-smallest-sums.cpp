class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        int n = nums1.size(), m = nums2.size();
        vector<vector<int>> ans;

        for(int i=0;i<n;i++){
            pq.push({nums1[i]+nums2[0],{i,0}});
        }
        while(pq.size() && k--){
            auto it=pq.top();
            int x=it.second.first,y=it.second.second;
            ans.push_back({nums1[x],nums2[y]});
            pq.pop();
            if(y+1<m) pq.push({nums1[x]+nums2[y+1],{x,y+1}});
        }          
        return ans;
    }
};