class Solution:
    def findPeakElement(self, nums: list[int]) -> int:
        low = 0
        high = len(nums) - 1

        if len(nums) == 1:
            return 0

        while low <= high:
            mid = (low + high) // 2

            if mid == 0:
                if nums[mid] > nums[mid + 1]:
                    return mid
                else:
                    low = mid + 1
                    continue

            if mid == len(nums) - 1:
                if nums[mid] > nums[mid - 1]:
                    return mid
                else:
                    high = mid - 1
                    continue

            if nums[mid] > nums[mid - 1] and nums[mid] > nums[mid + 1]:
                return mid

            if nums[mid] > nums[mid + 1]:
                high = mid - 1
            else:
                low = mid + 1

        return -1
