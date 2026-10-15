class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        if dividend == -2 ** 31 and divisor == -1:
            return 2 ** 31 - 1
        negative = (dividend < 0) != (divisor < 0)
        a, b = abs(dividend), abs(divisor)
        quotient = 0
        while a >= b:
            shift = 0
            while a >= (b << (shift + 1)):
                shift += 1
            a -= b << shift
            quotient += 1 << shift
        return -quotient if negative else quotient
