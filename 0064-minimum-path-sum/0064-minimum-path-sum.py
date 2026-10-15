class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        n = len(grid[0])
        row = [float("inf")] * n
        row[0] = 0
        for cells in grid:
            row[0] += cells[0]
            for c in range(1, n):
                row[c] = min(row[c], row[c - 1]) + cells[c]
        return row[-1]
