class Solution:
    def totalNQueens(self, n: int) -> int:
        full = (1 << n) - 1

        def count(cols, d1, d2):
            if cols == full:
                return 1
            total = 0
            free = full & ~(cols | d1 | d2)
            while free:
                bit = free & -free
                free -= bit
                total += count(cols | bit, ((d1 | bit) << 1) & full, (d2 | bit) >> 1)
            return total

        return count(0, 0, 0)
