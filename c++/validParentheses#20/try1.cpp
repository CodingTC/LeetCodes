// This is the optimal solution

class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> theses;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                theses.push(s[i]);
            }
            else if((s[i] == ')' || s[i] == '}' || s[i] == ']') && theses.empty())
            {
                return false;
            }
            else if((s[i] == ')') && theses.top() != '(')
            {
                return false;
            }
            else if((s[i] == '}') && theses.top() != '{')
            {
                return false;
            }
            else if((s[i] == ']') && theses.top() != '[')
            {
                return false;
            }
            else
            {
                theses.pop();
            }
        }

        return theses.empty();
    }
};

// Time: O(n)
// Space: O(n)
