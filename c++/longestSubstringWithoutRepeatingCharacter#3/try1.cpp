// This is close to the optimal solution
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        if(s.size() == 0)
        {
            return 0;
        }
        unordered_map<char, int> charCount;
        int maxLength = 0;

        for(int left = 0, right = 0; right < s.size(); right++)
        {
            charCount[s[right]]++;
            while(charCount[s[right]] > 1)
            {
                charCount[s[left]]--;
                left++;
            }

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};

// Time: O(n)
// Space: O(n)
