static void backtrack(int n, int k, int start, int* path, int depth, int** result, int* count) {
    if (depth == k) {
        result[*count] = malloc(sizeof(int) * k);
        memcpy(result[*count], path, sizeof(int) * k);
        (*count)++;
        return;
    }
    for (int x = start; x <= n - (k - depth) + 1; x++) {
        path[depth] = x;
        backtrack(n, k, x + 1, path, depth + 1, result, count);
    }
}

int** combine(int n, int k, int* returnSize, int** returnColumnSizes) {
    long long total = 1;
    for (int i = 1; i <= k; i++) total = total * (n - k + i) / i;
    int** result = malloc(sizeof(int*) * total);
    int path[20];
    *returnSize = 0;
    backtrack(n, k, 1, path, 0, result, returnSize);
    *returnColumnSizes = malloc(sizeof(int) * total);
    for (int i = 0; i < total; i++) (*returnColumnSizes)[i] = k;
    return result;
}
