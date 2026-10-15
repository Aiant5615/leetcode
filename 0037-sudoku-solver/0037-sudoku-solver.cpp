class Solution {
    bool row[9][10] = {}, col[9][10] = {}, box[9][10] = {};
    vector<pair<int, int>> empty;

    bool backtrack(vector<vector<char>>& board, int i) {
        if (i == (int)empty.size()) return true;
        auto [r, c] = empty[i];
        int b = r / 3 * 3 + c / 3;
        for (int d = 1; d <= 9; d++) {
            if (row[r][d] || col[c][d] || box[b][d]) continue;
            board[r][c] = '0' + d;
            row[r][d] = col[c][d] = box[b][d] = true;
            if (backtrack(board, i + 1)) return true;
            row[r][d] = col[c][d] = box[b][d] = false;
        }
        board[r][c] = '.';
        return false;
    }

public:
    void solveSudoku(vector<vector<char>>& board) {
        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.') { empty.push_back({r, c}); continue; }
                int d = board[r][c] - '0';
                row[r][d] = col[c][d] = box[r / 3 * 3 + c / 3][d] = true;
            }
        }
        backtrack(board, 0);
    }
};
