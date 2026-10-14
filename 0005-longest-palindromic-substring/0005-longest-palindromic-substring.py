class Solution:
    def longestPalindrome(self, s: str) -> str:
        best_start, best_len = 0, 0
        for center in range(len(s)):
            for left, right in ((center, center), (center, center + 1)):
                while left >= 0 and right < len(s) and s[left] == s[right]:
                    left -= 1
                    right += 1
                if right - left - 1 > best_len:
                    best_start, best_len = left + 1, right - left - 1
        return s[best_start:best_start + best_len]
