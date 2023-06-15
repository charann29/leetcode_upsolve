class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int numIslands = 0;
        
        // Create a visited array to keep track of visited cells
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        
        // Define the directions: up, down, left, right
        vector<pair<int, int>> directions{{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        // Helper function to perform DFS
        function<void(int, int)> dfs = [&](int row, int col) {
            // Check if the current cell is within the grid and is unvisited
            if (row < 0 || row >= m || col < 0 || col >= n || visited[row][col] || grid[row][col] == '0')
                return;
            
            // Mark the current cell as visited
            visited[row][col] = true;
            
            // Explore the neighbors in all four directions
            for (auto& dir : directions) {
                int newRow = row + dir.first;
                int newCol = col + dir.second;
                dfs(newRow, newCol);
            }
        };
        
        // Traverse the grid and perform DFS on unvisited land cells
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!visited[i][j] && grid[i][j] == '1') {
                    dfs(i, j);
                    numIslands++;
                }
            }
        }
        
        return numIslands;
    }
};
