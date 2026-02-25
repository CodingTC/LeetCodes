class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        minHeap = []

        for i in range(len(points)):
            x, y = points[i][0], points[i][1]
            dist = x**2 + y**2
            minHeap.append((dist, i))
        
        heapq.heapify(minHeap)

        i = 0
        res = []
        while i < k:
            dist, idx = heapq.heappop(minHeap)
            res.append(points[idx])
            i += 1
        
        return res

# Time: O(n + klogn)
# Space: O(n)
