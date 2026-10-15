static int cmp(const void* a, const void* b) { return *(const int*)a - *(const int*)b; }

static void backtrack(int* nums, int n, bool* used, int* path, int depth, int** result, int* count) {
    if (depth == n) {
        result[*count] = malloc(sizeof(int) * n);
        memcpy(result[*count], path, sizeof(int) * n);
        (*count)++;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (used[i] || (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])) continue;
        used[i] = true;
        path[depth] = nums[i];
        backtrack(nums, n, used, path, depth + 1, result, count);
        used[i] = false;
    }
}

int** permuteUnique(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int** result = malloc(sizeof(int*) * 40320);   /* 8! */
    bool used[8] = {false};
    int path[8];
    *returnSize = 0;
    backtrack(nums, numsSize, used, path, 0, result, returnSize);
    *returnColumnSizes = malloc(sizeof(int) * (*returnSize > 0 ? *returnSize : 1));
    for (int i = 0; i < *returnSize; i++) (*returnColumnSizes)[i] = numsSize;
    return result;
}
