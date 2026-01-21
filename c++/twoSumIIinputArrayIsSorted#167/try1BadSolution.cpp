// This solution is not good, but technically best time complexity

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int> answerVec;
        for(int i = 0, j = numbers.size() -1; i < numbers.size() && j >= 0 && i < j;)
        {
            if(numbers[i] + numbers[j] == target)
            {
                answerVec.push_back(i + 1);
                answerVec.push_back(j + 1);
                break;
            }
            if(numbers[i] + numbers[j] > target)
            {
                j--;
            }
            else if(numbers[i] + numbers[j] < target)
            {
                i++;
            }
        }
        return answerVec;
    }
};

// Time: O(N)
// Space: O(1)
