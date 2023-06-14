class Solution {
public:
            bool dfs(vector<vector<int>>& graph, vector<bool>& visited, int curr, int dest) {
                
                visited[curr] = true;

                if (curr == dest) {
                    return true;
                }

                for (int neighbor : graph[curr]) {
                    if (!visited[neighbor]) {
                        if (dfs(graph, visited, neighbor, dest)) {
                            return true;
                        }
                    }
                }

                return false;
            }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
                vector<vector<int>> graph(n);

                for (const auto& edge : edges) {
                    int u = edge[0];
                    int v = edge[1];
                    graph[u].push_back(v);
                    graph[v].push_back(u);
                }

                vector<bool> visited(n, false);

            return dfs(graph, visited, source, destination);
        }
};