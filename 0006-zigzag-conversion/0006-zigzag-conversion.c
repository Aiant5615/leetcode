char* convert(char* s, int numRows) {
    int n = strlen(s);
    char* out = malloc(n + 1);
    if (numRows == 1 || numRows >= n) { strcpy(out, s); return out; }
    int pos = 0, cycle = 2 * numRows - 2;
    for (int row = 0; row < numRows; row++) {
        for (int i = row; i < n; i += cycle) {
            out[pos++] = s[i];
            int j = i + cycle - 2 * row;
            if (row > 0 && row < numRows - 1 && j < n) out[pos++] = s[j];
        }
    }
    out[pos] = '\0';
    return out;
}
