class Solution:
    def findSubstring(self, s: str, words: List[str]) -> List[int]:
        width, count = len(words[0]), len(words)
        need = collections.Counter(words)
        result = []
        for offset in range(width):
            left, seen, used = offset, collections.Counter(), 0
            for right in range(offset, len(s) - width + 1, width):
                word = s[right:right + width]
                if word not in need:
                    left, seen, used = right + width, collections.Counter(), 0
                    continue
                seen[word] += 1
                used += 1
                while seen[word] > need[word]:
                    seen[s[left:left + width]] -= 1
                    left += width
                    used -= 1
                if used == count:
                    result.append(left)
        return result
