char* countAndSay(int n) {
    char* term = malloc(2);
    strcpy(term, "1");
    for (int k = 1; k < n; k++) {
        int len = strlen(term), pos = 0;
        char* out = malloc(2 * len + 1);
        for (int i = 0; i < len;) {
            int j = i;
            while (j < len && term[j] == term[i]) j++;
            out[pos++] = '0' + (j - i);
            out[pos++] = term[i];
            i = j;
        }
        out[pos] = '\0';
        free(term);
        term = out;
    }
    return term;
}
