//note this is an old solution, not the best
class Solution 
{
public:
    bool isPalindrome(int x) 
    {   

        int count = 0;
        vector<int> intArr;
        if(x < 0) return false;
        if(x < 10)
        {
            return true;
        }
        while(x != 0)
        {
            intArr.push_back(x % 10);
            count++;
            x /= 10;
        }
        bool isPalindrome = false;

        for(int i = 0; i < intArr.size()/2; i++)
        {
            if(intArr[i] == intArr[intArr.size() - 1 - i])
            {
                cout << intArr[i] << "\n" << intArr[intArr.size() - 1 - i] << "\n";
                isPalindrome = true;
            }
            else 
            {
                isPalindrome = false; 
                break;
            }
        }
        return isPalindrome;
    }
};

// time complexity O(n)
// space complexity O(n)
