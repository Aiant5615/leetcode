static int cmp(const void* a, const void* b) { return *(const int*)a - *(const int*)b; }

static void backtrack(int* nums, int n, int start, int* path, int depth, int** result, int* sizes, int* count) {
    result[*count] = malloc(sizeof(int) * (depth > 0 ? depth : 1));
    memcpy(result[*count], path, sizeof(int) * depth);
    sizes[(*count)++] = depth;
    for (int i = start; i < n; i++) {
        if (i > start && nums[i] == nums[i - 1]) continue;
        path[depth] = nums[i];
        backtrack(nums, n, i + 1, path, depth + 1, result, sizes, count);
    }
}

int** subsetsWithDup(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int total = 1 << numsSize;
    int** result = malloc(sizeof(int*) * total);
    int* sizes = malloc(sizeof(int) * total);
    int path[10];
    *returnSize = 0;
    backtrack(nums, numsSize, 0, path, 0, result, sizes, returnSize);
    *returnColumnSizes = sizes;
    return result;
}
