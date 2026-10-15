static void backtrack(int* nums, int n, bool* used, int* path, int depth, int** result, int* count) {
    if (depth == n) {
        result[*count] = malloc(sizeof(int) * n);
        memcpy(result[*count], path, sizeof(int) * n);
        (*count)++;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (used[i]) continue;
        used[i] = true;
        path[depth] = nums[i];
        backtrack(nums, n, used, path, depth + 1, result, count);
        used[i] = false;
    }
}

int** permute(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int total = 1;
    for (int i = 2; i <= numsSize; i++) total *= i;
    int** result = malloc(sizeof(int*) * total);
    bool used[6] = {false};
    int path[6];
    *returnSize = 0;
    backtrack(nums, numsSize, used, path, 0, result, returnSize);
    *returnColumnSizes = malloc(sizeof(int) * total);
    for (int i = 0; i < total; i++) (*returnColumnSizes)[i] = numsSize;
    return result;
}
