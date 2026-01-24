// this is the optimal solution
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int left = 0;
        int right = ((matrix.size()) * (matrix[0].size())) -1;   
        int mid = left + (right - left) / 2;

        int n = matrix[0].size();

        while(left <= right)
        {
            if(matrix[(mid/n)][(mid%n)] == target)
            {
                return true;
            }
            else if (matrix[(mid/n)][(mid%n)] < target)
            {
                left = mid + 1;
                mid = left + (right - left) / 2;
            }
            else
            {
                right = mid - 1;
                mid = left + (right - left) / 2;
            }
        }

        return false;
    }
};

//Time O(log(m*n))
// Space O(1)
