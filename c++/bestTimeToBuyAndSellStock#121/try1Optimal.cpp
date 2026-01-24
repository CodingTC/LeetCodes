// This is the optimal solution
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int maxProfit = 0;
        if(prices.size() <= 1)
        {
            return 0;
        }
        if(prices.size() == 2)
        {
            maxProfit = prices[1] - prices[0];
            if(maxProfit <= 0)
            {
                return 0;
            }
            return maxProfit;
        }
        for(int left = 0, right = left + 1; right < prices.size(); right++)
        {
            if(prices[right] - prices[left] > maxProfit)
            {
                maxProfit = prices[right] - prices[left];
            }
            if(prices[right] < prices[left])
            {
                left = right; 
            }

        }
        if(maxProfit <= 0)
        {
            return 0;
        }
        return maxProfit;
    }
};

//Time Complexity (O(n))
//Space Complexity (O(1))
