class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& A, int   B) {
        vector<int> sol;
    deque<int> q;
    
    int i = 0;
    
    while(i < B){
        while(!q.empty() && A[i] >= A[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
        i++;
    }
    
    sol.push_back(A[q.front()]);
    
    while(i < A.size()){
        if(i - q.front() >= B){
            q.pop_front();
        }
        while(!q.empty() && A[i] >= A[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
        sol.push_back(A[q.front()]);
        i++;
    }
    
    return sol;
    }
};