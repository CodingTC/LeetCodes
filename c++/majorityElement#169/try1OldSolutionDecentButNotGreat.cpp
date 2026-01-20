//this is not the optimal solution but it is fairly decent
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int majEle = nums[nums.size()/2];
        return majEle;     
    }
};


//O(n log n)
//O(1) space complexity 
