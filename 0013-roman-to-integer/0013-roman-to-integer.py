class Solution:
    def romanToInt(self, s: str) -> int:
        value = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
        total = 0
        for i, ch in enumerate(s):
            if i + 1 < len(s) and value[ch] < value[s[i + 1]]:
                total -= value[ch]
            else:
                total += value[ch]
        return total
