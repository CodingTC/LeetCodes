# Optimal solution
class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        cur = []
        def backtracking(numOpened, numClosed):
            if numClosed == n:
                res.append(''.join(cur))
                return
        
            if numOpened < n:
                cur.append("(")
                backtracking(numOpened + 1, numClosed)
                cur.pop()

            if not numOpened - numClosed <= 0:
                cur.append(")")
                backtracking(numOpened, numClosed + 1)
                cur.pop()

        backtracking(0, 0)
        return res

# Time: O(4^n/sqrt(N))
# Space: O(N)
