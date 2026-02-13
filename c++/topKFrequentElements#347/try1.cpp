// Not optimal but good
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {

        vector<int> answerVec;
        unordered_map<int, int> freqMap;
        vector<vector<int>> buckets(nums.size() + 1);

        for(int i = 0; i < nums.size(); i++)
        {
            freqMap[nums[i]]++;
        }

        for(auto pair : freqMap)
        {
            buckets[pair.second].push_back(pair.first);
        }

        for(int j = nums.size(); j >= 0 && answerVec.size() < k; j--)
        {
            if(buckets[j].size() > 0)
            {
               for(int num : buckets[j])
                {
                    answerVec.push_back(num);
                    if(answerVec.size() == k) break;
                }
            }
            
        }
        return answerVec;
    }
};

// Time: O(n)
// Space: O(n)
