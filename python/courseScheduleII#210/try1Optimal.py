# This is the optimal solution
class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
        numDependencies = [0] * numCourses
        dependencyGraph = defaultdict(list)
        ordering = []
        q = deque()
        
        for a, b in prerequisites:
            dependencyGraph[b].append(a)
            numDependencies[a] += 1
        
        for i in range(len(numDependencies)):
            if numDependencies[i] == 0:
                ordering.append(i)
                q.append(i)
        
        while q:
            cur = q.popleft()
            if cur in dependencyGraph:
                for num in dependencyGraph[cur]:
                    numDependencies[num] -= 1
                    if numDependencies[num] == 0:
                        q.append(num)
                        ordering.append(num)
        
        return ordering if len(ordering) == numCourses else []

# Time: O(N) / O(V + E)
# Space: O(N) / O(V + E)
