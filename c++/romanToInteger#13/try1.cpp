class Solution 
{
public:
    int romanToInt(string s) 
    {
        int integerSum = 0;
        for(int i = 0; i < s.length(); i++)
        {
            int numeralToInt = 0;
            int nextToInt = 0;
            
            switch(s.at(i))
            {
                case 'I':
                numeralToInt = 1;
                break;

                case 'V':
                numeralToInt = 5;
                break;

                case 'X':
                numeralToInt = 10;
                break;

                case 'L':
                numeralToInt = 50;
                break;

                case 'C':
                numeralToInt = 100;
                break;

                case 'D':
                numeralToInt = 500;
                break;

                case 'M':
                numeralToInt = 1000;
                break;
            }

            if(i < s.length() - 1)
            {
                switch(s.at(i + 1))
                {
                    case 'I':
                    nextToInt = 1;
                    break;

                    case 'V':
                    nextToInt = 5;
                    break;

                    case 'X':
                    nextToInt = 10;
                    break;

                    case 'L':
                    nextToInt = 50;
                    break;

                    case 'C':
                    nextToInt = 100;
                    break;

                    case 'D':
                    nextToInt = 500;
                    break;

                    case 'M':
                    nextToInt = 1000;
                    break;
                }
            }
            if(numeralToInt >= nextToInt)
            {
                integerSum += numeralToInt;
            }
            else
            {
                integerSum -= numeralToInt; 
            }
        }
        return integerSum;
    }
};

//time complexity O(n)
// space complexity O(1)
