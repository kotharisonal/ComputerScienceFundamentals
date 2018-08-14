/*
Given an array of n positive integers and a positive integer s, find the minimal length of a contiguous subarray of which the sum ≥ s. If there isn't one, return 0 instead.

Example: 

Input: s = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: the subarray [4,3] has the minimal length under the problem constraint.
*/

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
     int n = nums.size(); 
    // Initialize current sum and minimum length
    int curr_sum = 0, min_len = n+1;
 
    // Initialize starting and ending indexes
    int start = 0, end = 0;
    while (end < n)
    {
        // Keep adding array elements while current sum
        // is smaller than x
        while (curr_sum < s && end < n)
            curr_sum += nums[end++];
 
        // If current sum becomes greater than x.
        while (curr_sum >= s && start < n)
        {
            // Update minimum length if needed
            if (end - start < min_len)
                min_len = end - start;
 
            // remove starting elements
            curr_sum -= nums[start++];
        }
    }
    return min_len;
}
};
