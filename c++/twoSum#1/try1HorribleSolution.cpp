// This is really not optimal and is a bad solution

#include <iostream>
#include <vector>

class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        // to check if the indices of the two nums that add up to target are found
        bool found = false;
        // array for the indices to return
        vector<int> arr;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    arr.push_back(i);
                    arr.push_back(j);
                    found = true;
                    break;
                }
            }
            if(found) break;
        }

        showResults(arr);
        return arr;
    }

    void showResults(vector<int> indices)
    {
        cout << '[';
        for(int i = 0; i < indices.size(); i++)
        {
            cout << indices[i];
            if(i < indices.size() - 1)
            {
                cout << ',';
            }
        }
        cout << ']';
    }
};

// Time Complexity: O(n^2)
// Space Complexity: O(1)
