# This is the optimal solution
class Solution:
    def trap(self, height: List[int]) -> int:
        l, r = 0, len(height) - 1
        total = 0
        left_max, right_max = height[l], height[r]
        while l < r:
            if height[l] < height[r]:
                if height[l] < left_max:
                    total += left_max - height[l]
                else:
                    left_max = height[l]
                l = l + 1
            else:
                if height[r] < right_max:
                    total += right_max - height[r]
                else: 
                    right_max = height[r]
                r = r - 1

        return total

# Time: O(n)
# Space: O(1)
