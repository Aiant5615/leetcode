int largestRectangleArea(int* heights, int heightsSize) {
    int* stack = malloc(sizeof(int) * (heightsSize + 1));
    int top = 0, best = 0;
    for (int i = 0; i <= heightsSize; i++) {
        int h = i == heightsSize ? 0 : heights[i];
        while (top > 0 && heights[stack[top - 1]] >= h) {
            int height = heights[stack[--top]];
            int left = top == 0 ? 0 : stack[top - 1] + 1;
            if (height * (i - left) > best) best = height * (i - left);
        }
        stack[top++] = i;
    }
    free(stack);
    return best;
}
