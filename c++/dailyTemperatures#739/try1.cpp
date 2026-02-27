// Optimal time inoptimal space complexity

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        vector<int> answer(temperatures.size(), 0);

        stack<pair<int, int>> st;
        auto makePair = make_pair(temperatures[0], 0);
        st.push(makePair);
        for(int i = 0; i < temperatures.size(); i++)
        {
            while(!st.empty() && temperatures[i] > st.top().first)
            {
                auto stPair = st.top();
                st.pop();
                answer[stPair.second] = i - stPair.second;
            }
            auto anStPair = make_pair(temperatures[i], i);
            st.push(anStPair);
        }    

        return answer;
    }
};

// Time: O(n)
// Space: O(n)
