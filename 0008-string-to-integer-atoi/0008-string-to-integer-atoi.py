class Solution:
    def myAtoi(self, s: str) -> int:
        i, n = 0, len(s)
        while i < n and s[i] == " ":
            i += 1
        sign = 1
        if i < n and s[i] in "+-":
            sign = -1 if s[i] == "-" else 1
            i += 1
        value = 0
        while i < n and s[i].isdigit():
            value = value * 10 + (ord(s[i]) - ord("0"))
            i += 1
        value *= sign
        return max(-2 ** 31, min(2 ** 31 - 1, value))
