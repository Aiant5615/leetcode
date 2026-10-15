class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        top, bottom, left, right = 0, len(matrix) - 1, 0, len(matrix[0]) - 1
        out = []
        while top <= bottom and left <= right:
            out += matrix[top][left:right + 1]
            top += 1
            out += [matrix[r][right] for r in range(top, bottom + 1)]
            right -= 1
            if top <= bottom:
                out += matrix[bottom][left:right + 1][::-1]
                bottom -= 1
            if left <= right:
                out += [matrix[r][left] for r in range(bottom, top - 1, -1)]
                left += 1
        return out
