class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int top = 0, bottom = n - 1, left = 0, right = n - 1, k = 1;
        while (top <= bottom && left <= right) {
            for (int c = left; c <= right; c++) matrix[top][c] = k++;
            top++;
            for (int r = top; r <= bottom; r++) matrix[r][right] = k++;
            right--;
            for (int c = right; c >= left; c--) matrix[bottom][c] = k++;
            bottom--;
            for (int r = bottom; r >= top; r--) matrix[r][left] = k++;
            left++;
        }
        return matrix;
    }
};
