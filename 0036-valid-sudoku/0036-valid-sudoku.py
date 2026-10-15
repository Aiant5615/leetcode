class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        seen = set()
        for r in range(9):
            for c in range(9):
                d = board[r][c]
                if d == ".":
                    continue
                keys = ((r, "row", d), ("col", c, d), (r // 3, c // 3, d))
                if any(k in seen for k in keys):
                    return False
                seen.update(keys)
        return True
