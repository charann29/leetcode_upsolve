class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n, false);
        int provinces = 0;

        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                dfs(isConnected, i, visited);
                provinces++;
            }
        }

        return provinces;
    }

private:
    void dfs(const vector<vector<int>>& isConnected, int city, vector<bool>& visited) {
        int n = isConnected.size();
        stack<int> stack;
        stack.push(city);

        while (!stack.empty()) {
            int currCity = stack.top();
            stack.pop();
            visited[currCity] = true;

            for (int neighbor = 0; neighbor < n; ++neighbor) {
                if (isConnected[currCity][neighbor] == 1 && !visited[neighbor]) {
                    stack.push(neighbor);
                }
            }
        }
    }
};
