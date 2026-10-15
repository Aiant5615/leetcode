class Solution:
    def restoreIpAddresses(self, s: str) -> List[str]:
        result = []

        def backtrack(start, parts):
            if len(parts) == 4:
                if start == len(s):
                    result.append(".".join(parts))
                return
            for length in range(1, 4):
                part = s[start:start + length]
                if len(part) < length or (part[0] == "0" and length > 1) or int(part) > 255:
                    break
                backtrack(start + length, parts + [part])

        backtrack(0, [])
        return result
