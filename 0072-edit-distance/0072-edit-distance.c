int minDistance(char* word1, char* word2) {
    int m = strlen(word1), n = strlen(word2);
    int* prev = malloc(sizeof(int) * (n + 1));
    int* cur = malloc(sizeof(int) * (n + 1));
    for (int j = 0; j <= n; j++) prev[j] = j;
    for (int i = 1; i <= m; i++) {
        cur[0] = i;
        for (int j = 1; j <= n; j++) {
            if (word1[i - 1] == word2[j - 1]) cur[j] = prev[j - 1];
            else {
                int best = prev[j - 1];
                if (prev[j] < best) best = prev[j];
                if (cur[j - 1] < best) best = cur[j - 1];
                cur[j] = best + 1;
            }
        }
        int* t = prev; prev = cur; cur = t;
    }
    int answer = prev[n];
    free(prev);
    free(cur);
    return answer;
}
