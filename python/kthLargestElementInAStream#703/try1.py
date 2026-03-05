# This is the optimal solution

class KthLargest:

    def __init__(self, k: int, nums: List[int]):
        self.k = k
        heapq.heapify(nums)
        self.minHeap = nums

    def add(self, val: int) -> int:
        if len(self.minHeap) < self.k or val > self.minHeap[0]:
            heapq.heappush(self.minHeap, val)

        while len(self.minHeap) > self.k:
            heapq.heappop(self.minHeap)

        return self.minHeap[0]

# Your KthLargest object will be instantiated and called as such:
# obj = KthLargest(k, nums)
# param_1 = obj.add(val)


# Time: O(logk)
# Space: O(k)
