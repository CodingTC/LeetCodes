// this solution is also slightly not optimal but it is fairly decent
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, int> sMap;
        vector<string> newVec = strs;
        vector<vector<string>> answerVec;

        for(int i = 0; i < newVec.size(); i++)
        {
            sort(newVec[i].begin(), newVec[i].end());
            if(!sMap.contains(newVec[i]))
            {
                sMap[newVec[i]] = i;
                answerVec.push_back(vector<string>());
                sMap[newVec[i]] = answerVec.size() - 1;
                answerVec[sMap[newVec[i]]].push_back(strs[i]);
                
            }
            else
            {
                answerVec[sMap[newVec[i]]].push_back(strs[i]);
            }
        }
        return answerVec;
    }
    
};

// Time Complexity: O(NklogK)
// Space Complexity: O(Nk)
