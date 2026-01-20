// This solution is decent, technically one of the optimal solutions.
// There are other slower ones that use less space, so pick your poison.
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_map<int, int> inArray;
        for(auto itr = nums.begin(); itr != nums.end(); itr++)
        {
            inArray[*itr]++;
            if(inArray[*itr] > 1)
            {
                return true;
            }
        }
        return false;
    }
};

//time complexity O(N)
//space complexity O(N)
