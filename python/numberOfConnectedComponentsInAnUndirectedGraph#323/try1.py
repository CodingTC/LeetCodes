class Solution:
    def countComponents(self, n: int, edges: List[List[int]]) -> int:
        parents = [i for i in range(n)]
        rank = [1] * n

        def union(x, y):
            rootX = find(x)
            rootY = find(y)
            if rootX == rootY:
                return 0
            if rank[rootY] > rank[rootX]:
                parents[rootX] = rootY
                rank[rootY] += rank[rootX]
            else:
                parents[rootY] = rootX
                rank[rootX] += rank[rootY]
            
            return 1

        def find(x):
            if parents[x] != x:
                parents[x] = find(parents[x])
            return parents[x]

        res = n
        for x, y in edges:
            res -= union(x, y)
        
        return res
            
# Time: O(V * E(a(n)))  Inverse Ackermann function
# Space: O(V)
