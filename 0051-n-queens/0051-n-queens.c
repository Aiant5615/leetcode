static void backtrack(int n, int r, int* cols, bool* col, bool* d1, bool* d2, char*** result, int* count) {
    if (r == n) {
        result[*count] = malloc(sizeof(char*) * n);
        for (int i = 0; i < n; i++) {
            result[*count][i] = malloc(n + 1);
            memset(result[*count][i], '.', n);
            result[*count][i][cols[i]] = 'Q';
            result[*count][i][n] = '\0';
        }
        (*count)++;
        return;
    }
    for (int c = 0; c < n; c++) {
        if (col[c] || d1[r - c + n] || d2[r + c]) continue;
        col[c] = d1[r - c + n] = d2[r + c] = true;
        cols[r] = c;
        backtrack(n, r + 1, cols, col, d1, d2, result, count);
        col[c] = d1[r - c + n] = d2[r + c] = false;
    }
}

char*** solveNQueens(int n, int* returnSize, int** returnColumnSizes) {
    char*** result = malloc(sizeof(char**) * 400);   /* 352 solutions for n = 9 */
    int cols[9];
    bool col[9] = {0}, d1[18] = {0}, d2[18] = {0};
    *returnSize = 0;
    backtrack(n, 0, cols, col, d1, d2, result, returnSize);
    *returnColumnSizes = malloc(sizeof(int) * (*returnSize > 0 ? *returnSize : 1));
    for (int i = 0; i < *returnSize; i++) (*returnColumnSizes)[i] = n;
    return result;
}
