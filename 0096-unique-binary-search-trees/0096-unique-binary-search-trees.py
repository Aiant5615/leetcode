class Solution:
    def numTrees(self, n: int) -> int:
        count = [1] + [0] * n
        for nodes in range(1, n + 1):
            for root in range(1, nodes + 1):
                count[nodes] += count[root - 1] * count[nodes - root]
        return count[n]
