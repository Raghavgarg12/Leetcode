class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n=len(nums)
        a=n*(n+1)//2
        b=sum(nums)
        return a-b
