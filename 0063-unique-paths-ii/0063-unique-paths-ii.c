int uniquePathsWithObstacles(int** obstacleGrid, int obstacleGridSize, int* obstacleGridColSize) {
    int n = obstacleGridColSize[0];
    long long* row = calloc(n, sizeof(long long));
    row[0] = 1;
    for (int r = 0; r < obstacleGridSize; r++)
        for (int c = 0; c < n; c++) {
            if (obstacleGrid[r][c] == 1) row[c] = 0;
            else if (c > 0) row[c] += row[c - 1];
        }
    int answer = row[n - 1];
    free(row);
    return answer;
}
