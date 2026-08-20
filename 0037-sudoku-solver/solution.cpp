class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }

private:
    bool solve(vector<vector<char>>& board) {
        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] == '.') {
                    for (char val = '1'; val <= '9'; ++val) {
                        if (isValid(board, r, c, val)) {
                            board[r][c] = val;
                            
                            // Recursively solve for the remaining cells
                            if (solve(board)) {
                                return true;
                            }
                            
                            // Backtrack if the guess didn't lead to a solution
                            board[r][c] = '.';
                        }
                    }
                    return false; // No valid number fits in this cell
                }
            }
        }
        return true; // All cells filled successfully
    }

    bool isValid(const vector<vector<char>>& board, int r, int c, char val) {
        for (int i = 0; i < 9; ++i) {
            // Check row constraints
            if (board[r][i] == val) return false;
            
            // Check column constraints
            if (board[i][c] == val) return false;
            
            // Check 3x3 subgrid constraints
            int gridRow = 3 * (r / 3) + i / 3;
            int gridCol = 3 * (c / 3) + i % 3;
            if (board[gridRow][gridCol] == val) return false;
        }
        return true;
    }
};
