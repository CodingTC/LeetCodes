// This is an old solution that is not great
class Solution 
{
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int eqVal = 0;
        int k = nums.size();
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == val)
            {
                nums.erase(nums.begin() + i);
                eqVal++;
                i = i - 1;
            }
        }
        k = k - eqVal;
        return k;
    }
};

//time complexity O(n)
//space complexity O(1)
