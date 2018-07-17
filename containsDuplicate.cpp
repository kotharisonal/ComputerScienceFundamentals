/*
Given an array of integers, find if the array contains any duplicates.

Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>countMap;
        for(int i = 0; i < nums.size(); i++)
        {
            if(countMap.find(nums[i]) == countMap.end())
            {
                countMap[nums[i]]++;
            }
            else
                //Duplicate 
                return true;
        }
        
        return false;
    }
};
