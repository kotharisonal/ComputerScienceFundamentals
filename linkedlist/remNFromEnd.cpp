/*
Given a linked list, remove the n-th node from the end of list and return its head.
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        int index = 0;
        
        if(head->next == NULL && n==1)
        {
            free(head);
            return NULL;
        }
        
        if(head == NULL)
            return NULL;
        
        //Find size of List
        ListNode * current = head;        
        while(current != NULL){
            current = current->next;
            size++;
        }
        
        if(size >n)
        {      
        
            //WE traverse the list again and get to size -n node
            current = head;
            ListNode* prevp = NULL;
            ListNode* next = NULL;
            while(index < (size-n)){
            prevp = current;
            current = current->next;
            next = current->next; 
            index++; 
            }
            
            prevp->next = next;
            free(current); 
        }
        else if(size==n)
        {
            current = head;
            ListNode* prevp = NULL;
            ListNode* next = NULL;
            next = current->next;
            head = next;
            free(current);
        }

        return head;
    }
};

