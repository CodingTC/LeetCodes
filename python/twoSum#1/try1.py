# This is the optimal solution
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        complementMap = {}
        for i in range(len(nums)):
            if nums[i] in complementMap:
                return [complementMap[nums[i]], i]
            
            complement = target - nums[i]
            complementMap[complement] = i

# Time: O(n)
# Space: O(n)
