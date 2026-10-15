class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        result = [[]]
        for x in nums:
            result += [subset + [x] for subset in result]
        return result
