static int cmp(const void* a, const void* b) { return *(const int*)a - *(const int*)b; }

static void backtrack(int* cand, int n, int start, int remaining, int* path, int depth,
                      int** result, int* sizes, int* count) {
    if (remaining == 0) {
        result[*count] = malloc(sizeof(int) * (depth > 0 ? depth : 1));
        memcpy(result[*count], path, sizeof(int) * depth);
        sizes[(*count)++] = depth;
        return;
    }
    for (int i = start; i < n && cand[i] <= remaining; i++) {
        if (i > start && cand[i] == cand[i - 1]) continue;
        path[depth] = cand[i];
        backtrack(cand, n, i + 1, remaining - cand[i], path, depth + 1, result, sizes, count);
    }
}

int** combinationSum2(int* candidates, int candidatesSize, int target, int* returnSize, int** returnColumnSizes) {
    qsort(candidates, candidatesSize, sizeof(int), cmp);
    int** result = malloc(sizeof(int*) * 200);
    int* sizes = malloc(sizeof(int) * 200);
    int path[100];
    *returnSize = 0;
    backtrack(candidates, candidatesSize, 0, target, path, 0, result, sizes, returnSize);
    *returnColumnSizes = sizes;
    return result;
}
