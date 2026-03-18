# This is the optimal solution
# Time: O(nlogn)
# Space: O(1)

class Solution:
    def minSpeedOnTime(self, dist: List[int], hour: float) -> int:
        if hour <= len(dist) - 1:
            return -1

        left, right = 1, 10**7

#dist = [1, 3, 2]
#hour = 6
# l = 1
# r = 3
        curMinSpeed = right
        while left <= right:
            mid = (right + left) // 2
            isFastEnough = self.getIsValid(mid, dist, hour)
            if isFastEnough:
                curMinSpeed = min(curMinSpeed, mid)
                right = mid - 1
            else:
                left = mid + 1

        return curMinSpeed

    def getIsValid(self, mid, dist, hour):
        totalTime = 0
        for i in range(len(dist)):
            cur = dist[i] / mid
            if i != len(dist) - 1:
                totalTime += math.ceil(cur)
            else:
                totalTime += cur
        
        return totalTime <= hour

        
# if len(dist) - 1 < hour: return -1
# this means that it is impossible since there are not enough hours for
# each train ride

#next we'll define our search space for binary search
# it will be 1 ... to max(dist)
# so from 1 to the max in the distance
