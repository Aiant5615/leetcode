class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        n = len(obstacleGrid[0])
        row = [0] * n
        row[0] = 1
        for cells in obstacleGrid:
            for c in range(n):
                if cells[c] == 1:
                    row[c] = 0
                elif c > 0:
                    row[c] += row[c - 1]
        return row[-1]
