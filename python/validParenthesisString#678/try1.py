# This is an optimal solution


class Solution:
    def checkValidString(self, s: str) -> bool:
        count = 0
        numStars = 0
        
        for i in range(len(s)):
            if s[i] == "*":
                numStars += 1
            if s[i] == "(":
                count += 1
            if s[i] == ")":
                count -= 1
            
            if count + numStars < 0:
                return False

        count = 0
        numStars = 0

        for i in range(len(s) - 1, -1, -1):
            if s[i] == "*":
                numStars += 1
            if s[i] == "(":
                count += 1
            if s[i] == ")":
                count -= 1
            
            if count - numStars > 0:
                return False

        return True

# Time: O(n)
# Space: O(1)
