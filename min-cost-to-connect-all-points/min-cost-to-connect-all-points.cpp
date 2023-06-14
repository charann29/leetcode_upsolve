
class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<pair<int, pair<int, int>>> edges;

        // Step 1: Calculate distances between points
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int distance = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
                edges.push_back({distance, {i, j}});
            }
        }

        // Step 2: Sort edges based on distance
        sort(edges.begin(), edges.end());

        vector<int> parent(n);

        // Step 3: Initialize parent array
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }

        int cost = 0;

        // Step 6: Construct MST using Kruskal's algorithm
        for (const auto& edge : edges) {
            int distance = edge.first;
            int u = edge.second.first;
            int v = edge.second.second;

            // Step 4: Find parent of u and v
            int parentU = find(parent, u);
            int parentV = find(parent, v);

            // Step 5: Union operation
            if (parentU != parentV) {
                cost += distance;
                parent[parentU] = parentV;
            }
        }

        return cost;
    }

private:
    // Step 4: Find function using union-find algorithm
    int find(vector<int>& parent, int x) {
        if (parent[x] != x) {
            parent[x] = find(parent, parent[x]);
        }
        return parent[x];
    }
};
