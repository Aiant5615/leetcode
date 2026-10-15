static void backtrack(const char* s, int n, int start, int* cuts, int depth, char** result, int* count) {
    if (depth == 4) {
        if (start != n) return;
        char* ip = malloc(n + 4);
        int pos = 0;
        for (int k = 0; k < 4; k++) {
            int from = k == 0 ? 0 : cuts[k - 1];
            if (k > 0) ip[pos++] = '.';
            memcpy(ip + pos, s + from, cuts[k] - from);
            pos += cuts[k] - from;
        }
        ip[pos] = '\0';
        result[(*count)++] = ip;
        return;
    }
    int value = 0;
    for (int len = 1; len <= 3 && start + len <= n; len++) {
        value = value * 10 + (s[start + len - 1] - '0');
        if ((s[start] == '0' && len > 1) || value > 255) break;
        cuts[depth] = start + len;
        backtrack(s, n, start + len, cuts, depth + 1, result, count);
    }
}

char** restoreIpAddresses(char* s, int* returnSize) {
    char** result = malloc(sizeof(char*) * 81);   /* at most 3^4 ways to cut */
    int cuts[4];
    *returnSize = 0;
    backtrack(s, strlen(s), 0, cuts, 0, result, returnSize);
    return result;
}
