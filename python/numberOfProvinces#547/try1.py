class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        parents = [i for i in range(len(isConnected))]
        rank = [1] * len(isConnected)

        def find(x):
            if parents[x] != x:
                parents[x] = find(parents[x])
            return parents[x]

        def union(x, y):
            rootX, rootY = find(x), find(y)

            if rootX == rootY:
                return 0

            if rank[rootY] > rank[rootX]:
                rank[rootY] += rank[rootX]
                parents[rootX] = rootY
            else:
                rank[rootX] += rank[rootY]
                parents[rootY] = rootX

            return 1

        res = len(isConnected)
        for i in range(len(isConnected)):
            for j in range(len(isConnected)):
                if isConnected[i][j] == 1:
                    res -= union(i, j)
        
        return res

# Time: O(V^2) / O(N)
# Space: O(V)
