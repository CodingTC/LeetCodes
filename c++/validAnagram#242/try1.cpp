// This is technically the generic optimal solution to the problem.
// There is another more optimal solution for this specific problem.

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.size() != t.size())
        {
            return false; 
        }    
        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;
        for(int i = 0; i < s.size(); i++)
        {
            sMap[s[i]]++;
            tMap[t[i]]++;
        }
        if(sMap.size() != tMap.size())
        {
            return false;
        }

        for(int i = 0; i < tMap.size(); i++)
        {
            if(sMap[i] != tMap[i])
            {
                return false;
            }
        }
        return true;
    }
};

//time complexity O(N)
//space complexity O(N)
