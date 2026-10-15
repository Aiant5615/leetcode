bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int n = matrixColSize[0], lo = 0, hi = matrixSize * n - 1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2, value = matrix[mid / n][mid % n];
        if (value == target) return true;
        if (value < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return false;
}
