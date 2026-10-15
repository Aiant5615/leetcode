class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.'));
        vector<bool> col(n), diag1(2 * n), diag2(2 * n);
        function<void(int)> backtrack = [&](int r) {
            if (r == n) { result.push_back(board); return; }
            for (int c = 0; c < n; c++) {
                if (col[c] || diag1[r - c + n] || diag2[r + c]) continue;
                col[c] = diag1[r - c + n] = diag2[r + c] = true;
                board[r][c] = 'Q';
                backtrack(r + 1);
                board[r][c] = '.';
                col[c] = diag1[r - c + n] = diag2[r + c] = false;
            }
        };
        backtrack(0);
        return result;
    }
};
