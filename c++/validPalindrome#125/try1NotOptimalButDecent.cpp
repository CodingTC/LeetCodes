// This solution is not optimal space wise, technically this is the best
// time complexity at O(n) but there are faster solutions

class Solution 
{
public:
    bool isPalindrome(string s) 
    {
        string newStr;
        for(auto itr = s.begin(); itr != s.end(); itr++)
        {
            if(isalnum(*itr))
            {
                newStr.push_back(tolower(*itr));
            }
        }
        for(int i = 0, j = newStr.size() - 1; i < newStr.size() && j > 0; i++, j--)
        {
            if(newStr[i] != newStr[j])
            {
                return false;
            }
        }
        return true;
    }
};

// Time Complexity: O(N)
// Space Complexity: O(N)
