class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long long sum=0;
        vector<int> importance(n);
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<roads.size();i++){
            importance[roads[i][0]]++;
            importance[roads[i][1]]++;
        }
        for(int i=0;i<importance.size();i++){
            pq.push({importance[i],i});
        }
        while(!pq.empty()){
            int roadImportance=pq.top().first;
            sum+= (long long)roadImportance*(long long)n;
            n--;
            pq.pop();
        }
        return sum;
    }
};