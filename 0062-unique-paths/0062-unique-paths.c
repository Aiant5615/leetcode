int uniquePaths(int m, int n) {
    int* row = malloc(sizeof(int) * n);
    for (int c = 0; c < n; c++) row[c] = 1;
    for (int r = 1; r < m; r++)
        for (int c = 1; c < n; c++) row[c] += row[c - 1];
    int answer = row[n - 1];
    free(row);
    return answer;
}
