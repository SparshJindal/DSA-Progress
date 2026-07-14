class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       vector<unordered_set<char>> rows(9);
       vector<unordered_set<char>> cols(9);
       vector<unordered_set<char>> boxes(9);

       for (int r = 0 ; r < 9 ; r++) {
        for (int c = 0 ; c < 9 ; c++) {

            char val = board[r][c];

            if (val == '.') {
                continue;
            }

            int b = (r/3)*3 + (c/3);

            if(rows[r].count(val)== 1 ||
               cols[c].count(val)== 1 ||
               boxes[b].count(val)== 1 ) {
                return false;
               }
        rows[r].insert(val);
        cols[c].insert(val);
        boxes[b].insert(val);

        }
       }
           return true;
    }

};
