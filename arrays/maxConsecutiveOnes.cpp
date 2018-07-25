/*
Given a binary array, find the maximum number of consecutive 1s in this array.
*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int n = nums.size();
        int curone = 0;
        int maxone = 0;
        for (int i=0; i<n; i++)
        {
            if(nums[i]==1)
            {    
                 curone++; 
            }
            else
            {
                maxone = max(curone, maxone);
                curone = 0;
            }
            
        }
        maxone = max(curone, maxone);

        return maxone;
    }
};
