int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int top = 0, bottom = matrixSize - 1, left = 0, right = matrixColSize[0] - 1, k = 0;
    int* out = malloc(sizeof(int) * matrixSize * matrixColSize[0]);
    while (top <= bottom && left <= right) {
        for (int c = left; c <= right; c++) out[k++] = matrix[top][c];
        top++;
        for (int r = top; r <= bottom; r++) out[k++] = matrix[r][right];
        right--;
        if (top <= bottom) { for (int c = right; c >= left; c--) out[k++] = matrix[bottom][c]; bottom--; }
        if (left <= right) { for (int r = bottom; r >= top; r--) out[k++] = matrix[r][left]; left++; }
    }
    *returnSize = k;
    return out;
}
