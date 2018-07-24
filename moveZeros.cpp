/*
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

*/

class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n = a.size();
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if (a[i] != 0)
            {
                a[count] = a[i];
                count++;
            }
        }
        //for(int i=count; i<n; i++)
        //{
        //    a[count] = 0;  
        //}
        while (count < n)
            a[count++] = 0;

    }
};
