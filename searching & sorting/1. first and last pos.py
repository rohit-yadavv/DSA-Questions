# https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution:
    def searchRange(self, nums, target: int): 
        low = 0
        high = len(nums) - 1
        firstPos = -1
        lastPos = -1
 
        while low <= high:
            mid = (low + high) // 2

            if nums[mid] == target:
                firstPos = mid
                high = mid - 1
            elif target < nums[mid]:
                high = mid - 1
            else:
                low = mid + 1
 
        low = 0
        high = len(nums) - 1
 
        while low <= high:
            mid = (low + high) // 2

            if nums[mid] == target:
                lastPos = mid
                low = mid + 1
            elif target < nums[mid]:
                high = mid - 1
            else:
                low = mid + 1

        return [firstPos, lastPos]
