char* simplifyPath(char* path) {
    int n = strlen(path), top = 0;
    char** stack = malloc(sizeof(char*) * (n + 1));
    int* lens = malloc(sizeof(int) * (n + 1));
    for (int i = 0; i < n;) {
        while (i < n && path[i] == '/') i++;
        int start = i;
        while (i < n && path[i] != '/') i++;
        int len = i - start;
        if (len == 0 || (len == 1 && path[start] == '.')) continue;
        if (len == 2 && path[start] == '.' && path[start + 1] == '.') { if (top > 0) top--; continue; }
        stack[top] = path + start;
        lens[top++] = len;
    }
    char* out = malloc(n + 2);
    int pos = 0;
    for (int i = 0; i < top; i++) {
        out[pos++] = '/';
        memcpy(out + pos, stack[i], lens[i]);
        pos += lens[i];
    }
    if (pos == 0) out[pos++] = '/';
    out[pos] = '\0';
    free(stack);
    free(lens);
    return out;
}
