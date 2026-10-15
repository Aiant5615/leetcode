static char** KEYS;
static int cmpChar(const void* a, const void* b) { return *(const char*)a - *(const char*)b; }
static int cmpIdx(const void* a, const void* b) { return strcmp(KEYS[*(const int*)a], KEYS[*(const int*)b]); }

char*** groupAnagrams(char** strs, int strsSize, int* returnSize, int** returnColumnSizes) {
    KEYS = malloc(sizeof(char*) * strsSize);
    int* order = malloc(sizeof(int) * strsSize);
    for (int i = 0; i < strsSize; i++) {
        KEYS[i] = strdup(strs[i]);
        qsort(KEYS[i], strlen(KEYS[i]), 1, cmpChar);
        order[i] = i;
    }
    qsort(order, strsSize, sizeof(int), cmpIdx);
    char*** result = malloc(sizeof(char**) * strsSize);
    *returnColumnSizes = malloc(sizeof(int) * strsSize);
    *returnSize = 0;
    for (int i = 0; i < strsSize;) {
        int j = i;
        while (j < strsSize && strcmp(KEYS[order[i]], KEYS[order[j]]) == 0) j++;
        result[*returnSize] = malloc(sizeof(char*) * (j - i));
        for (int k = i; k < j; k++) result[*returnSize][k - i] = strs[order[k]];
        (*returnColumnSizes)[(*returnSize)++] = j - i;
        i = j;
    }
    for (int i = 0; i < strsSize; i++) free(KEYS[i]);
    free(KEYS);
    free(order);
    return result;
}
