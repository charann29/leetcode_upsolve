#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> solutions;
        vector<string> board(n, string(n, '.'));  // Initialize the board with empty cells
        backtrack(0, board, solutions);
        return solutions;
    }
    
private:
    void backtrack(int row, vector<string>& board, vector<vector<string>>& solutions) {
        if (row == board.size()) {
            solutions.push_back(board);  // Found a valid solution
            return;
        }
        
        int n = board.size();
        
        for (int col = 0; col < n; col++) {
            if (isValid(row, col, board)) {
                board[row][col] = 'Q';  // Place a queen
                
                // Recursively backtrack to the next row
                backtrack(row + 1, board, solutions);
                
                board[row][col] = '.';  // Remove the queen to explore other possibilities
            }
        }
    }
    
    bool isValid(int row, int col, const vector<string>& board) {
        int n = board.size();
        
        // Check if there is any queen in the same column
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q')
                return false;
        }
        
        // Check if there is any queen in the upper-left diagonal
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q')
                return false;
        }
        
        // Check if there is any queen in the upper-right diagonal
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q')
                return false;
        }
        
        return true;  // The current position is valid
    }
};
