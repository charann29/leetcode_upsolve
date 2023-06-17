class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        int health = n/2;    // atleast this much should be removed
        priority_queue< pair<int,int> >q;
        map<int,int> mp;
        for(auto x:arr) mp[x]++;
        for(auto it:mp) q.push({it.second,it.first}); // You can also
                                                //store only frequency
        int temp = 0;
        while(!q.empty())
        {
          auto node = q.top();
          q.pop();
          if(health>0)
          {        // Greedily check for the answer
            health -= node.first;
            temp++;
          } else break;
        }
        return temp;
    }

};