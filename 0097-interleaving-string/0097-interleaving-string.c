bool isInterleave(char* s1, char* s2, char* s3) {
    int m = strlen(s1), n = strlen(s2);
    if (m + n != (int)strlen(s3)) return false;
    bool dp[101] = {false};   /* dp[j]: s3[0..i+j) is an interleaving of s1[0..i) and s2[0..j) */
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 && j == 0) { dp[j] = true; continue; }
            bool fromS1 = i > 0 && dp[j] && s1[i - 1] == s3[i + j - 1];
            bool fromS2 = j > 0 && dp[j - 1] && s2[j - 1] == s3[i + j - 1];
            dp[j] = fromS1 || fromS2;
        }
    }
    return dp[n];
}
