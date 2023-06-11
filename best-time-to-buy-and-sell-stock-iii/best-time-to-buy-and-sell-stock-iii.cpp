class Solution {
public:
    int maxProfit(vector<int>& A) {
    int n = A.size();
    vector<long long>after(6,0),curr(6,0);
    for(int ind =n-1;ind>=0;ind--){
        for(int buy=1;buy<=4;buy++){
            if(buy&1)
                curr[buy] = max(-A[ind]+after[buy+1],after[buy]);
            else
                curr[buy] = max(A[ind]+after[buy+1],after[buy]);
        }
        after = curr;
    }
    return after[1];
        
    }
};