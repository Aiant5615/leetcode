class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        result = []

        def backtrack(start, path):
            if len(path) == k:
                result.append(path[:])
                return
            for x in range(start, n - (k - len(path)) + 2):
                path.append(x)
                backtrack(x + 1, path)
                path.pop()

        backtrack(1, [])
        return result
