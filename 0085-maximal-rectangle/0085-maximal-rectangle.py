class Solution:
    def maximalRectangle(self, matrix: List[List[str]]) -> int:
        n = len(matrix[0])
        heights = [0] * (n + 1)
        best = 0
        for row in matrix:
            for c in range(n):
                heights[c] = heights[c] + 1 if row[c] == "1" else 0
            stack = []
            for i, h in enumerate(heights):
                while stack and heights[stack[-1]] >= h:
                    height = heights[stack.pop()]
                    left = stack[-1] + 1 if stack else 0
                    best = max(best, height * (i - left))
                stack.append(i)
        return best
