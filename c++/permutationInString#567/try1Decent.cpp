// This is a decent sliding window solution nearly optimized
class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        if(s2.size() < s1.size())
        {
            return false;
        }

        unordered_map<char, int> s1Map;
        for(int i = 0; i < s1.size(); i++)
        {
            s1Map[s1[i]]++;
        }    

        for(int left = 0, right = 0; right < s2.size(); left++, right++)
        {
            while(right < s1.size() - 1)
            {
                if(s1Map.count(s2[right]))
                {
                    s1Map[s2[right]]--;
                }
                right++;
            }
            if(s1Map.count(s2[right]))
            {
                s1Map[s2[right]]--;
            }
            bool isTrue = false;
            for(auto pair : s1Map)
            {
                if(pair.second > 0)
                {
                    isTrue = false;
                    break;
                }
                else
                {
                    isTrue = true;
                }
            }
            if(isTrue)
            {
                return true;
            }

            if(s1Map.count(s2[left]))
            {
                s1Map[s2[left]]++;
            }

        }
        return false;
    }
};

// Time: O(m*n)
// Space: O(1)
