/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum =0;
        int maxsum = INT_MIN;
        for (int i=0; i < nums.size(); i++){
          cursum = cursum + nums[i];  
          if(maxsum < cursum)
                maxsum = cursum;
            
            if (cursum < 0 )
                cursum = 0;

        }   
      return maxsum;      
    }        
};
