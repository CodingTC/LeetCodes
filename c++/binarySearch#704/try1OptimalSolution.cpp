// This is the optimal solution for the problem
class Solution
{
        public:    
        int search(vector<int>& nums, int target)
        {
                int left = 0;
                int right = nums.size()-1;
                int mid = ((left + right)/2);
                
                while(left <= right)
                {
                        if(target == nums[mid])
                        {
                            return mid;
                        }       
                        else if (target > nums[mid])
                        {
                            left = mid + 1;
                            mid = ((left + right)/2);
                        }
                        else
                        {
                            right = mid - 1;
                            mid = (right/2);
                        }

                }
            return -1;
        
        }

};

//Time Complexity: O(logn)
//Space Complexity: O(1)
