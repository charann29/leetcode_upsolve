
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n, false);
        int provinces = 0;

        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                bfs(isConnected, i, visited);
                provinces++;
            }
        }

        return provinces;
    }

private:
    void bfs(const vector<vector<int>>& isConnected, int city, vector<bool>& visited) {
        int n = isConnected.size();
        queue<int> queue;
        queue.push(city);

        while (!queue.empty()) {
            int currCity = queue.front();
            queue.pop();
            visited[currCity] = true;

            for (int neighbor = 0; neighbor < n; ++neighbor) {
                if (isConnected[currCity][neighbor] == 1 && !visited[neighbor]) {
                    queue.push(neighbor);
                }
            }
        }
    }
};
