class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        result = []

        def backtrack(path, opened, closed):
            if len(path) == 2 * n:
                result.append("".join(path))
                return
            if opened < n:
                path.append("(")
                backtrack(path, opened + 1, closed)
                path.pop()
            if closed < opened:
                path.append(")")
                backtrack(path, opened, closed + 1)
                path.pop()

        backtrack([], 0, 0)
        return result
