/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> a;
        int n = nums.size();
        for(int i =0; i<n;i++)
            for(int j = i+1;j<n;j++)
            {
                if ((nums[i]+nums[j])==target)
                {
                    a.push_back(i);
                    a.push_back(j);
                    return a;
                }
                    
            }
        return a;
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> retIndex;
        bool found = false;
        int i=0;
        int j=numbers.size()-1;
        while(i<j && !found) {
            if(numbers[i]+numbers[j]>target)
                j--;
            else if (numbers[i]+numbers[j]<target)
                i++;
            else{
                found = true;
                retIndex.push_back(i+1);
                retIndex.push_back(j+1);
                return retIndex;

            }         
        }
        return retIndex;                   
    }
};
