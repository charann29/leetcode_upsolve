class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        if(trips.size() == 0)
            return true;
        
        // record max and min location for every trips
        int minLoc = 0, maxLoc = 0;
        for(int i=0;i<trips.size();++i){
            minLoc = min(minLoc,trips[i][1]);
            maxLoc = max(maxLoc,trips[i][2]);
        }
        // count passengers in every trips
        vector<int> cntPass(maxLoc - minLoc +1,0);
        for(int i = 0;i < trips.size();++i){
            for(int j = trips[i][1];j < trips[i][2];++j){
                cntPass[j - minLoc] += trips[i][0];
                // false if the trips over capacity
                if(cntPass[j - minLoc] > capacity)
                    return false;
            }
        }
        
        return true;
    }
};