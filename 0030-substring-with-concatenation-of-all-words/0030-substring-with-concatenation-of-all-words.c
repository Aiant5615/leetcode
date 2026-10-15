static int WIDTH;
static int cmpWord(const void* a, const void* b) { return strncmp(*(char* const*)a, *(char* const*)b, WIDTH); }

int* findSubstring(char* s, char** words, int wordsSize, int* returnSize) {
    int n = strlen(s), width = strlen(words[0]);
    WIDTH = width;
    /* unique words, sorted, with how many times each is needed */
    char** uniq = malloc(sizeof(char*) * wordsSize);
    memcpy(uniq, words, sizeof(char*) * wordsSize);
    qsort(uniq, wordsSize, sizeof(char*), cmpWord);
    int* need = calloc(wordsSize, sizeof(int));
    int m = 0;
    for (int i = 0; i < wordsSize; i++) {
        if (m == 0 || strncmp(uniq[m - 1], uniq[i], width) != 0) uniq[m++] = uniq[i];
        need[m - 1]++;
    }
    /* id of the word starting at each position, or -1 */
    int* id = malloc(sizeof(int) * (n + 1));
    for (int i = 0; i + width <= n; i++) {
        int lo = 0, hi = m - 1;
        id[i] = -1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2, c = strncmp(s + i, uniq[mid], width);
            if (c == 0) { id[i] = mid; break; }
            if (c < 0) hi = mid - 1; else lo = mid + 1;
        }
    }
    int* result = malloc(sizeof(int) * (n + 1));
    int* seen = malloc(sizeof(int) * (m + 1));
    *returnSize = 0;
    for (int offset = 0; offset < width; offset++) {
        memset(seen, 0, sizeof(int) * m);
        int left = offset, used = 0;
        for (int right = offset; right + width <= n; right += width) {
            int w = id[right];
            if (w < 0) { memset(seen, 0, sizeof(int) * m); used = 0; left = right + width; continue; }
            seen[w]++;
            used++;
            while (seen[w] > need[w]) { seen[id[left]]--; left += width; used--; }
            if (used == wordsSize) result[(*returnSize)++] = left;
        }
    }
    free(uniq); free(need); free(id); free(seen);
    return result;
}
