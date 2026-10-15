int** subsets(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int total = 1 << numsSize;
    int** result = malloc(sizeof(int*) * total);
    *returnColumnSizes = malloc(sizeof(int) * total);
    for (int mask = 0; mask < total; mask++) {
        result[mask] = malloc(sizeof(int) * (numsSize > 0 ? numsSize : 1));
        int size = 0;
        for (int i = 0; i < numsSize; i++)
            if (mask & (1 << i)) result[mask][size++] = nums[i];
        (*returnColumnSizes)[mask] = size;
    }
    *returnSize = total;
    return result;
}
