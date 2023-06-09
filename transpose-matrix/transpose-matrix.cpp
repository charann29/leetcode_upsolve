class Solution {
public:


std::vector<std::vector<int>> transpose(std::vector<std::vector<int>>& matrix) {
    int m = matrix.size(); // Number of rows
    int n = matrix[0].size(); // Number of columns

    std::vector<std::vector<int>> result(n, std::vector<int>(m));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[j][i] = matrix[i][j];
        }
    }

    return result;
}

};