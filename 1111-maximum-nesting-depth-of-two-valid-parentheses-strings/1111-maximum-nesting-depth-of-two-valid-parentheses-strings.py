class Solution:
    def maxDepthAfterSplit(self, seq: str) -> list[int]:
        return [(i & 1) ^ (c == '(') for i, c in enumerate(seq)]