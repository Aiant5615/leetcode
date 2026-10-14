char* longestPalindrome(char* s) {
    int n = strlen(s), bestStart = 0, bestLen = 0;
    for (int center = 0; center < n; center++) {
        for (int odd = 0; odd < 2; odd++) {
            int left = center, right = center + odd;
            while (left >= 0 && right < n && s[left] == s[right]) { left--; right++; }
            if (right - left - 1 > bestLen) { bestStart = left + 1; bestLen = right - left - 1; }
        }
    }
    char* out = malloc(bestLen + 1);
    memcpy(out, s + bestStart, bestLen);
    out[bestLen] = '\0';
    return out;
}
