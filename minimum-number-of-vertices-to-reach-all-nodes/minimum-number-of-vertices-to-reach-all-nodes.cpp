class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
            vector<bool> reachable(n, false);

            for (const auto& edge : edges) {
                int from = edge[0];
                int to = edge[1];
                reachable[to] = true;
            }

            vector<int> result;
            for (int i = 0; i < n; i++) {
                if (!reachable[i]) {
                    result.push_back(i);
                }
            }

    return result;
    }
};