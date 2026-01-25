# This is the optimal solution
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        left = 0
        right = len(numbers) - 1
        while True:
            numSum = numbers[left] + numbers[right]
            if numSum > target:
                right -= 1
            elif numSum < target:
                left += 1
            else:
                return [left + 1, right + 1]

# Time: O(n)
# Space: O(1)
