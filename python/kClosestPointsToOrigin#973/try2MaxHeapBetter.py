class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        maxHeap = []

        for i in range(k):
            x, y = points[i][0], points[i][1]
            dist = x**2 + y**2
            maxHeap.append((-dist, i))
        
        heapq.heapify(maxHeap)

        for i in range(k, len(points)):
            x, y = points[i][0], points[i][1]
            dist = x**2 + y**2
            if -dist > maxHeap[0][0]:
                heapq.heappop(maxHeap)
                heapq.heappush(maxHeap, (-dist, i))

        res = []
        for i in range(len(maxHeap)):
            dist, idx = maxHeap[i][0], maxHeap[i][1]
            res.append(points[idx])

        return res

# Time: O(nlogk)
# Space: O(k) (not counting output)
