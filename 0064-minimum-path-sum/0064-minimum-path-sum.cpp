class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<int> row(n, INT_MAX);
        row[0] = 0;
        for (auto& cells : grid) {
            row[0] += cells[0];
            for (int c = 1; c < n; c++) row[c] = min(row[c], row[c - 1]) + cells[c];
        }
        return row[n - 1];
    }
};
