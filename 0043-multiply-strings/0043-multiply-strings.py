class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        m, n = len(num1), len(num2)
        digits = [0] * (m + n)
        for i in range(m - 1, -1, -1):
            for j in range(n - 1, -1, -1):
                total = (ord(num1[i]) - 48) * (ord(num2[j]) - 48) + digits[i + j + 1]
                digits[i + j + 1] = total % 10
                digits[i + j] += total // 10
        result = "".join(map(str, digits)).lstrip("0")
        return result or "0"
