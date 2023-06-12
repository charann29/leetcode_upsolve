class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
            vector<string> ranks(score.size());
            vector<pair<int, int>> sI;
            for (int i = 0; i < score.size(); ++i) {
                sI.push_back({score[i], i});
            }

            sort(sI.rbegin(), sI.rend());
            for (int i = 0; i < sI.size(); ++i) {
                if (i == 0) ranks[sI[i].second] = "Gold Medal";
                else if (i == 1) ranks[sI[i].second] = "Silver Medal";
                else if (i == 2) ranks[sI[i].second] = "Bronze Medal";
                else ranks[sI[i].second] = to_string(i + 1);
            }

            return ranks;
    }
};