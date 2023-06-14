#include <vector>
#include <unordered_map>

class Solution {
public:
    int minReorder(int n, std::vector<std::vector<int>>& connections) {
        unordered_map<int, std::vector<std::pair<int, int>>> adj_list;
        for (const auto& connection : connections) {
            int u = connection[0];
            int v = connection[1];
            adj_list[u].emplace_back(v, 1);   
            adj_list[v].emplace_back(u, 0);   // directed edge from v to u (reversed)
        }

        int count = 0;
        unordered_set<int> visited;
        
        std::function<void(int, int)> dfs = [&](int city, int parent) {
            visited.insert(city);

            for (const auto& neighbor : adj_list[city]) {
                int n = neighbor.first;
                int direction = neighbor.second;
                if (visited.find(n) == visited.end()) {
                    count += direction;
                    dfs(n, city);
                }
            }
        };

        dfs(0, -1);  // Start DFS from the capital city (city 0)

        return count;
    }
};
