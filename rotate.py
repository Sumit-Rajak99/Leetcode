class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n = len(nums)
        if k>n:
            k %= n
        nums.reverse()
        nums[:k] = reversed(nums[:k])
        nums[k:] = reversed(nums[k:])