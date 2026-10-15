int** insert(int** intervals, int intervalsSize, int* intervalsColSize, int* newInterval, int newIntervalSize,
             int* returnSize, int** returnColumnSizes) {
    int** result = malloc(sizeof(int*) * (intervalsSize + 1));
    int start = newInterval[0], end = newInterval[1], i = 0, k = 0;
    while (i < intervalsSize && intervals[i][1] < start) result[k++] = intervals[i++];
    while (i < intervalsSize && intervals[i][0] <= end) {
        if (intervals[i][0] < start) start = intervals[i][0];
        if (intervals[i][1] > end) end = intervals[i][1];
        i++;
    }
    result[k] = malloc(sizeof(int) * 2);
    result[k][0] = start;
    result[k][1] = end;
    k++;
    while (i < intervalsSize) result[k++] = intervals[i++];
    *returnSize = k;
    *returnColumnSizes = malloc(sizeof(int) * k);
    for (int j = 0; j < k; j++) (*returnColumnSizes)[j] = 2;
    return result;
}
