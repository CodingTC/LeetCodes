# this is the optimal solution

class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums.sort()

        cur = []
        def backtracking(i):
            if i >= len(nums):
                res.append(copy.copy(cur))
                return

            cur.append(nums[i])
            backtracking(i + 1)
            while i + 1 < len(nums) and nums[i] == nums[i+1]:
                i += 1
            
            cur.pop()
            backtracking(i+1)

        backtracking(0)
        return res

# Time: O(n*n^2)
# Space: O(n)
