// This is not an optimal solution, it is also very old from when I just started
// learning how to code
class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int count = 1;
        for(int i = 0; i < nums.size() - 1;)
        {
            if(nums[i] == nums[i + 1])
            {
                nums.erase(nums.begin() + (i + 1));
            }
            else
            {
                count++;
                i++;
            }
        }
        return count;
    }
};

// Time Complexity: O(n^2)
// Space Complexity: O(1)
