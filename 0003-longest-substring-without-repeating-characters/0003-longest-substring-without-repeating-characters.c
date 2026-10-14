int lengthOfLongestSubstring(char* s) {
    int lastSeen[128];
    for (int i = 0; i < 128; i++) lastSeen[i] = -1;
    int best = 0, start = 0;
    for (int i = 0; s[i]; i++) {
        unsigned char ch = s[i];
        if (lastSeen[ch] >= start) start = lastSeen[ch] + 1;
        lastSeen[ch] = i;
        if (i - start + 1 > best) best = i - start + 1;
    }
    return best;
}
