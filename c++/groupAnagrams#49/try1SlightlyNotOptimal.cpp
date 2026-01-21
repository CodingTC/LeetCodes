// This is close to the optimal solution, but it is not optimal.
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        if(strs.size() < 2)
        {
            vector<vector<string>> ansVec;
            ansVec.push_back(strs);
            return ansVec;
        }   
        vector<vector<string>> ansVec;
        unordered_map<string, vector<string>> strMap;
        string vecString;
        for(int i = 0; i < strs.size(); i++)
        {
            vecString = strs[i];
            sort(vecString.begin(), vecString.end());
            strMap[vecString].push_back(strs[i]);
        }
        for(const auto& pair : strMap)
        {
            ansVec.push_back(pair.second);
        }
        return ansVec;
    }
};

// Time: O(N*Klogk)
// Space: O(N*K)
