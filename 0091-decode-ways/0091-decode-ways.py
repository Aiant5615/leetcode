class Solution:
    def numDecodings(self, s: str) -> int:
        prev, cur = 1, 1 if s[0] != "0" else 0   # ways for s[:i-1] and s[:i]
        for i in range(1, len(s)):
            ways = cur if s[i] != "0" else 0
            if 10 <= int(s[i - 1:i + 1]) <= 26:
                ways += prev
            prev, cur = cur, ways
        return cur
