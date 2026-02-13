# Near optimal solution
class Solution:
    def minWindow(self, s: str, t: str) -> str:
        charMap = defaultdict(int)
        for i in range(len(t)):
            charMap[t[i]] += 1

        freqCount = len(charMap)
        minWinLen = math.inf
        minWindow = [math.inf, math.inf]

        l = r = 0
        while r != len(s) + 1:
            if freqCount == 0:
                if r - l + 1  < minWinLen:
                    minWinLen = r - l + 1
                    minWindow = [l, r]

                if s[l] in charMap:
                    charMap[s[l]] += 1
                    if charMap[s[l]] == 1:
                        freqCount += 1
                l += 1
                continue

            if r < len(s) and s[r] in charMap:
                charMap[s[r]] -= 1
                if charMap[s[r]] == 0:
                    freqCount -= 1
    
            r += 1

        return "" if math.isinf(minWinLen) else s[minWindow[0] : minWindow[1]] 
    
# Time: O(M + N)
# Space: O(M)
