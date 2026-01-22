// optimal complexity but bad runtime because somewhat bad code

class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
        int currentMax = min(height[0], height[height.size() -1]) * (height.size()-1);

        for(int i = 0, j = height.size() - 1; i < j; )
        {
            int thisMax = min(height[i], height[j]) * (j-i);
            if(thisMax > currentMax)
            {
                currentMax = thisMax;
            }

            if(height[i] < height[j])
            {
                i++;
            }
            else if(height[i] > height[j])
            {
                j--;
            }
            else 
            {
                i++;
            }
        }
        return currentMax;
    }
};

// Time: O(n)
// Space: O(1)
