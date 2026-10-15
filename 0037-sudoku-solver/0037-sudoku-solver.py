class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:
        rows = [set() for _ in range(9)]
        cols = [set() for _ in range(9)]
        boxes = [set() for _ in range(9)]
        empty = []
        for r in range(9):
            for c in range(9):
                d = board[r][c]
                if d == ".":
                    empty.append((r, c))
                else:
                    rows[r].add(d)
                    cols[c].add(d)
                    boxes[r // 3 * 3 + c // 3].add(d)

        def backtrack(i):
            if i == len(empty):
                return True
            r, c = empty[i]
            b = r // 3 * 3 + c // 3
            for d in "123456789":
                if d in rows[r] or d in cols[c] or d in boxes[b]:
                    continue
                board[r][c] = d
                rows[r].add(d); cols[c].add(d); boxes[b].add(d)
                if backtrack(i + 1):
                    return True
                rows[r].remove(d); cols[c].remove(d); boxes[b].remove(d)
            board[r][c] = "."
            return False

        backtrack(0)
