int minPathSum(int** grid, int gridSize, int* gridColSize) {
    int n = gridColSize[0];
    int* row = malloc(sizeof(int) * n);
    for (int c = 0; c < n; c++) row[c] = INT_MAX;
    row[0] = 0;
    for (int r = 0; r < gridSize; r++) {
        row[0] += grid[r][0];
        for (int c = 1; c < n; c++) row[c] = (row[c] < row[c - 1] ? row[c] : row[c - 1]) + grid[r][c];
    }
    int answer = row[n - 1];
    free(row);
    return answer;
}
