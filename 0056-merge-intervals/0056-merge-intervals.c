static int cmp(const void* a, const void* b) { return (*(int* const*)a)[0] - (*(int* const*)b)[0]; }

int** merge(int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int** returnColumnSizes) {
    qsort(intervals, intervalsSize, sizeof(int*), cmp);
    int** merged = malloc(sizeof(int*) * intervalsSize);
    int k = 0;
    for (int i = 0; i < intervalsSize; i++) {
        if (k > 0 && intervals[i][0] <= merged[k - 1][1]) {
            if (intervals[i][1] > merged[k - 1][1]) merged[k - 1][1] = intervals[i][1];
        } else {
            merged[k] = malloc(sizeof(int) * 2);
            merged[k][0] = intervals[i][0];
            merged[k][1] = intervals[i][1];
            k++;
        }
    }
    *returnSize = k;
    *returnColumnSizes = malloc(sizeof(int) * k);
    for (int i = 0; i < k; i++) (*returnColumnSizes)[i] = 2;
    return merged;
}
