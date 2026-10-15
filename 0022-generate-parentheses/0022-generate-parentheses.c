static void backtrack(int n, char* path, int len, int opened, int closed, char** result, int* count) {
    if (len == 2 * n) {
        result[*count] = malloc(2 * n + 1);
        memcpy(result[*count], path, 2 * n);
        result[*count][2 * n] = '\0';
        (*count)++;
        return;
    }
    if (opened < n) { path[len] = '('; backtrack(n, path, len + 1, opened + 1, closed, result, count); }
    if (closed < opened) { path[len] = ')'; backtrack(n, path, len + 1, opened, closed + 1, result, count); }
}

char** generateParenthesis(int n, int* returnSize) {
    char** result = malloc(sizeof(char*) * 1430);   /* Catalan(8) */
    char path[17];
    *returnSize = 0;
    backtrack(n, path, 0, 0, 0, result, returnSize);
    return result;
}
