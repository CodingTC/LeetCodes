# This is the optimal solution

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums.sort()
        for i in range(len(nums)):
            if nums[i] > 0:
                break
            if i == 0 or nums[i] != nums[i-1]:
                self.twoSumII(res, i, nums)

        return res

    def twoSumII(self, res, i, nums):
        L, R = i + 1, len(nums) - 1
        while L < R:
            totalSum = nums[L] + nums[R] + nums[i]
            if totalSum < 0:
                L += 1
            elif totalSum > 0:
                R -= 1
            else:
                res.append([nums[i], nums[L], nums[R]])
                L += 1
                R -= 1
                while L < R and nums[L] == nums[L-1]:
                    L += 1

# Time: O(n^2)
# Space: O(n)
