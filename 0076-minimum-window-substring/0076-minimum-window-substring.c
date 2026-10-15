char* minWindow(char* s, char* t) {
    int need[128] = {0};
    for (int i = 0; t[i]; i++) need[(unsigned char)t[i]]++;
    int missing = strlen(t), start = 0, bestStart = 0, bestLen = INT_MAX;
    for (int end = 0; s[end]; end++) {
        if (need[(unsigned char)s[end]]-- > 0) missing--;
        while (missing == 0) {
            if (end - start + 1 < bestLen) { bestStart = start; bestLen = end - start + 1; }
            if (++need[(unsigned char)s[start++]] > 0) missing++;
        }
    }
    if (bestLen == INT_MAX) bestLen = 0;
    char* out = malloc(bestLen + 1);
    memcpy(out, s + bestStart, bestLen);
    out[bestLen] = '\0';
    return out;
}
