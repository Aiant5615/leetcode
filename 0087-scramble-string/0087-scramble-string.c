static bool dp[31][30][30];

bool isScramble(char* s1, char* s2) {
    int n = strlen(s1);
    memset(dp, 0, sizeof(dp));
    /* dp[len][i][j]: is s2[j..j+len) a scramble of s1[i..i+len)? */
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) dp[1][i][j] = s1[i] == s2[j];
    for (int len = 2; len <= n; len++)
        for (int i = 0; i + len <= n; i++)
            for (int j = 0; j + len <= n; j++)
                for (int k = 1; k < len && !dp[len][i][j]; k++)
                    dp[len][i][j] = (dp[k][i][j] && dp[len - k][i + k][j + k]) ||
                                    (dp[k][i][j + len - k] && dp[len - k][i + k][j]);
    return dp[n][0][0];
}
