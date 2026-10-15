class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        result, cols = [], []
        used_cols, diag1, diag2 = set(), set(), set()

        def backtrack(r):
            if r == n:
                result.append(["." * c + "Q" + "." * (n - c - 1) for c in cols])
                return
            for c in range(n):
                if c in used_cols or r - c in diag1 or r + c in diag2:
                    continue
                used_cols.add(c); diag1.add(r - c); diag2.add(r + c); cols.append(c)
                backtrack(r + 1)
                used_cols.remove(c); diag1.remove(r - c); diag2.remove(r + c); cols.pop()

        backtrack(0)
        return result
