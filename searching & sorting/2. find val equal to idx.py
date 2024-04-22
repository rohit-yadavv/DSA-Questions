
# https://leetcode.com/problems/find-pivot-index/



class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        
        for i in range(len(nums)):
            if sum(nums[:i+1])==sum(nums[i:]):
                return i
        return -1