class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        std::unordered_set<std::string> seen;
        
        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                char val = board[r][c];
                if (val != '.') {
                    std::string row_key = "row_" + std::to_string(r) + "_" + val;
                    std::string col_key = "col_" + std::to_string(c) + "_" + val;
                    std::string box_key = "box_" + std::to_string(r / 3) + "_" + std::to_string(c / 3) + "_" + val;
                    
                    if (seen.count(row_key) || seen.count(col_key) || seen.count(box_key)) {
                        return false;
                    }
                    
                    seen.insert(row_key);
                    seen.insert(col_key);
                    seen.insert(box_key);
                }
            }
        }
        return true;
    }
};
