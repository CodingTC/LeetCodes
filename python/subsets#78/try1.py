# This solution is not great but technically has optimal complexity for time
class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        s = set()

        def dfs(i, curSet):
            s.add(tuple(curSet))

            while(i < len(nums)):

                dfs(i + 1, curSet[:])
                curSet.append(nums[i])
                dfs(i + 1, curSet[:])
                i += 1

        dfs(0, [])

        return list(s)

# Time: O(N*2^N)
# Space: O(N*2^N)
