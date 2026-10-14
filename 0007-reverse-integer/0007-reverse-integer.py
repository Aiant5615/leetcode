class Solution:
    def reverse(self, x: int) -> int:
        limit = 2 ** 31
        sign = -1 if x < 0 else 1
        digits = abs(x)
        result = 0
        while digits:
            result = result * 10 + digits % 10
            digits //= 10
        result *= sign
        return result if -limit <= result < limit else 0
