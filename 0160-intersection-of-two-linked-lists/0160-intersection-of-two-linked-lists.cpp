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
    int length(ListNode*head){
        int c=0;
        ListNode *temp=head;
        while(temp!=NULL){
            c++;
            temp=temp->next;
           
        }
        return c;
        
    }
   
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n=length(headA);
        int m=length(headB);
         if(headA == NULL || headB == NULL) return NULL;
        
       
        if(n>m)
        {
            while(n>m)
            {
                headA=headA->next;
                n--;
            }
            
        }
        else if(m>n)
        {
             while(n<m)
            {
                headB=headB->next;
                m--;
            }
        
        }
        while(headA && headB)
        {
            if(headA==headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};