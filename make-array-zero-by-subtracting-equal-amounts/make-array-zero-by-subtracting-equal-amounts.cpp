class Solution {
public:
    int minimumOperations(vector<int>& nums)
    {
        priority_queue <int, vector<int>, greater<int>> pq;
        vector <int> temp;
        int k,ans=0;
        for(auto i:nums)
            pq.push(i);
        while(!pq.empty())
        {
            if(pq.top()==0)
            {
                pq.pop();
                continue;
            }
            k=pq.top();
            pq.pop();
            while(!pq.empty())
            {
                int x=pq.top();
                temp.push_back(x-k);
                pq.pop();
            }
            ans++;
            for(auto i:temp)
            {
                pq.push(i);
            }
            temp.clear();
        }
        return ans;
    }
};