class Solution:
    def isScramble(self, s1: str, s2: str) -> bool:
        n = len(s1)
        # dp[length][i][j]: is s2[j:j+length] a scramble of s1[i:i+length]?
        dp = [[[False] * n for _ in range(n)] for _ in range(n + 1)]
        for i in range(n):
            for j in range(n):
                dp[1][i][j] = s1[i] == s2[j]
        for length in range(2, n + 1):
            for i in range(n - length + 1):
                for j in range(n - length + 1):
                    for k in range(1, length):
                        if (dp[k][i][j] and dp[length - k][i + k][j + k]) or \
                           (dp[k][i][j + length - k] and dp[length - k][i + k][j]):
                            dp[length][i][j] = True
                            break
        return dp[n][0][0]
