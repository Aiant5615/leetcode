class Solution:
    def minWindow(self, s: str, t: str) -> str:
        need = collections.Counter(t)
        missing = len(t)
        start, best_start, best_len = 0, 0, float("inf")
        for end, ch in enumerate(s):
            if need[ch] > 0:
                missing -= 1
            need[ch] -= 1
            while missing == 0:
                if end - start + 1 < best_len:
                    best_start, best_len = start, end - start + 1
                need[s[start]] += 1
                if need[s[start]] > 0:
                    missing += 1
                start += 1
        return "" if best_len == float("inf") else s[best_start:best_start + best_len]
