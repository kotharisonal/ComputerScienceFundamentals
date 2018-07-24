/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l1head = l1;
        ListNode* l2head = l2;
        ListNode* l3head = NULL;

        
        ListNode* currentl1 = l1;
        ListNode* currentl2 = l2;
        ListNode* currentl3 = NULL;

        int carry = 0;

        while ((currentl1 != NULL) || (currentl2 != NULL) || (carry))
        {
            ListNode * newNode = (ListNode *)malloc(sizeof(struct ListNode));
            if (currentl1 && currentl2) {
                *newNode = (currentl1->val + currentl2->val + carry)%10;
                carry = (currentl1->val + currentl2->val+ carry)/10;

            }
            else if (currentl1)
            {
                *newNode = (currentl1->val + carry)%10;
                 carry = (currentl1->val + carry)/10;

            }
            else if (currentl2)
            {
                *newNode = (currentl2->val + carry)%10;
                 carry = (currentl2->val + carry)/10;

            }
            else
            {
                *newNode = carry;
                 carry =  0;
            }
            
            if(currentl3 == NULL)
            {
                l3head = newNode;
                currentl3 = newNode;
            } else
            {
                currentl3->next = newNode;
                currentl3 = currentl3->next;
            }
    
                if (currentl1) currentl1 = currentl1->next;
                if (currentl2) currentl2 = currentl2->next;
            
        }
        return l3head;
    } 

};
