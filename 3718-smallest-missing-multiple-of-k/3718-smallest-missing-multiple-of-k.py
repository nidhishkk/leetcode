class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        lis=list(set(nums))
        expected=k
        while(lis.count(expected)):
            expected+=k
        return expected