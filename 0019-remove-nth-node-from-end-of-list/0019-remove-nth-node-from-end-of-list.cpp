/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
int length(ListNode* head){
    ListNode *temp=head;int c=0;
    while(temp!=NULL){
        temp=temp->next;
        c++;
    }
    return c;
}

    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        // ListNode *slow=head,*fast=head;
        // while(n--){
        //     fast=fast->next;
        // }
        // if(fast==NULL){
        //     return slow->next;
        
        // }
        // while(fast->next != NULL)
        // {
        //     slow=slow->next;
        //     fast=fast->next;
        // }
        // slow->next = slow->next->next;
        // return head;


        int l=length(head);
       // ListNode* temp=head;
        ListNode* tail =head;

        int k=l-n-1;
        if(n==l){
            head=head->next;
            return head;

        }
        if(n==1){
          while(tail->next->next!=NULL)
          {
            tail=tail->next;

          }
          tail->next=NULL;
          return head;

        }
        ListNode* temp=head;
        while(k--){

            temp=temp->next;

        }
        temp->next=temp->next->next;

        return head;

    }
};