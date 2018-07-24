/*
Given an array nums and a value val, remove all instances of that value in-place and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

*/
/*
Now let's reconsider the space limitation.

We can use a similar strategy. We still use two pointers: one is still used for the iteration while the second one 
always points at the position for next addition.
*/

class Solution {
public:
    int removeElement(vector<int>& a, int val) {
        int n = a.size();
        int count = 0;
        for(int i =0;i<n;i++)
        {
            if(a[i]==val)
                continue;
            else
            {
                a[count]=a[i];
                count++;

            }
            
        }
       return count; 
    }
};

