// This is optimal time complexity solution
class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<int> operands;
        int first;
        int second;
        for(string token : tokens)
        {
            if(token == "+")
            {
                first = operands.top();
                operands.pop();
                second = operands.top();
                operands.pop();
                operands.push(second + first);
            }
            else if(token == "-")
            {
                first = operands.top();
                operands.pop();
                second = operands.top();
                operands.pop();
                operands.push(second - first);
            }
            else if (token == "*")
            {
                first = operands.top();
                operands.pop();
                second = operands.top();
                operands.pop();
                operands.push(second * first);
            }
            else if (token == "/")
            {
                first = operands.top();
                operands.pop();
                second = operands.top();
                operands.pop();
                operands.push(second / first);
            }
            else
            {
                operands.push(stoi(token));
            }
        }
        return operands.top();
    }
};

// Time: O(n)
// Space: O(n)
