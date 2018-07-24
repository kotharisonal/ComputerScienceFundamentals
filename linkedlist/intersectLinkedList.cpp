/*
Write a program to find the node at which the intersection of two singly linked lists begins.


For example, the following two linked lists:

A:          a1 → a2
                   ↘
                     c1 → c2 → c3
                   ↗            
B:     b1 → b2 → b3
begin to intersect at node c1.


Notes:

If the two linked lists have no intersection at all, return null.
The linked lists must retain their original structure after the function returns.
You may assume there are no cycles anywhere in the entire linked structure.
Your code should preferably run in O(n) time and use only O(1) memory.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     int a = 0, b = 0;
        ListNode *tempA = headA, *tempB = headB;
        
        while(tempA) {
            a++;
            tempA = tempA->next;
        }
        
        while(tempB) {
            b++;
            tempB = tempB->next;
        }
        
        tempA = headA;
        tempB = headB;
        
        int difference = a - b;
       
        while(difference > 0) {
            tempA = tempA->next;
            difference--;
        }
        
        while(difference < 0) {
            tempB = tempB->next;
            difference++;
        }
        
        while(tempA != tempB) {
            tempA = tempA->next;
            tempB = tempB->next;
        }
        
        return tempA;
    }
};
