int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {
    int** matrix = malloc(sizeof(int*) * n);
    *returnColumnSizes = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) { matrix[i] = malloc(sizeof(int) * n); (*returnColumnSizes)[i] = n; }
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
    *returnSize = n;
    return matrix;
}
