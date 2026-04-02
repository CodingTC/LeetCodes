# This is the optimal solution
class Solution:
    def reverseWords(self, s: str) -> str:
        wordArr = s.split()

        for i in range(len(wordArr)):
            wordArr[i] = wordArr[i][::-1]

        newString = " ".join(wordArr)
        
        return newString

# Time: O(n)
# Space: O(1)
