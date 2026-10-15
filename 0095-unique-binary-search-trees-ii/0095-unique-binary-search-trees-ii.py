class Solution:
    def generateTrees(self, n: int) -> List[Optional[TreeNode]]:
        def build(lo, hi):
            if lo > hi:
                return [None]
            trees = []
            for root in range(lo, hi + 1):
                for left in build(lo, root - 1):
                    for right in build(root + 1, hi):
                        trees.append(TreeNode(root, left, right))
            return trees

        return build(1, n)
