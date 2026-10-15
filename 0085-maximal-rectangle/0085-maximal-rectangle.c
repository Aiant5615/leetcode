int maximalRectangle(char** matrix, int matrixSize, int* matrixColSize) {
    int n = matrixColSize[0], best = 0;
    int* heights = calloc(n + 1, sizeof(int));
    int* stack = malloc(sizeof(int) * (n + 1));
    for (int r = 0; r < matrixSize; r++) {
        for (int c = 0; c < n; c++) heights[c] = matrix[r][c] == '1' ? heights[c] + 1 : 0;
        int top = 0;
        for (int i = 0; i <= n; i++) {
            while (top > 0 && heights[stack[top - 1]] >= heights[i]) {
                int height = heights[stack[--top]];
                int left = top == 0 ? 0 : stack[top - 1] + 1;
                if (height * (i - left) > best) best = height * (i - left);
            }
            stack[top++] = i;
        }
    }
    free(heights);
    free(stack);
    return best;
}
