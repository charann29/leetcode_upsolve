class Solution {
public:
            void dfs(vector<vector<int>>& graph, int curr, int dest, vector<int>& path, vector<vector<int>>& paths) {
                
                path.push_back(curr);

                if (curr == dest) {
                    paths.push_back(path);
                } else {
                    for (int neighbor : graph[curr]) {
                        dfs(graph, neighbor, dest, path, paths);
                    }
                }

                path.pop_back();
            }

            vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
                vector<vector<int>> paths;
                vector<int> path;
                int n = graph.size();
                dfs(graph, 0, n - 1, path, paths);
                return paths;
            }

};