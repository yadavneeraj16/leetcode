// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     int noofnodes(ListNode* head){
//         ListNode *temp=head;int c=0;
//         while(temp!=NULL){
//             c++;
//             temp=temp->next;
           
            
//         }
//         return c;
//     }
//      int length(ListNode* head){
//         int c=0;
//         ListNode* temp=head;
//         while(temp!=NULL){
//             c++;
//             temp=temp->next;
//         }
//         return c;
//     }
//      ListNode* middleNode(ListNode* head) 
//     {
//         int n=length(head);
//         ListNode* temp=head;
//         int r=(n/2);
        
//         while(r--){
//             temp=temp->next;
//         }
//         return temp;
//     }
//       ListNode* reverseList(ListNode* head) 
//     {

// if(head==NULL||head->next==NULL){
//     return head;
// }
//         ListNode* curr=head;
//         ListNode* prev=NULL;
//         ListNode*frwd=NULL;
//         while(curr!=NULL)
//         {
//             frwd=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=frwd;
//         }

//         return prev;
//     }
    
//     bool isPalindrome(ListNode* head) {
        
//        if(head->next==NULL){
//            return head;
//        }
//        ListNode* mid=middleNode(head);
//         ListNode* temp=mid->next;
//         ListNode* ptr=reverseList(temp);
//         ListNode* head1=head;
//         ListNode* head2=mid->next;
//         while(head2!=NULL)
//         {
//             if(head1->val!=head2->val){
//                 return false;
//             }
//             head1=head1->next;
//              head2=head2->next;
            
            
//         }
//         temp=mid->next;
//         mid->next=reverseList(temp);
//         return true;
        
        
//     }
// };
class Solution{
  private:
    ListNode* getMid(ListNode* head ) {
        ListNode* slow = head;
        ListNode* fast = head -> next;

        while(fast != NULL && fast-> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }

        return slow;
    }
    ListNode* reverse(ListNode* head) {

        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(ListNode *head)
    {
        if(head -> next == NULL) {
            return true;
        }

        //step 1 -> find Middle
        ListNode* middle = getMid(head);
        //cout << "Middle " << middle->data << endl;

        //step2 -> reverse List after Middle
        ListNode* temp = middle -> next;
        middle -> next = reverse(temp);

        //step3 - Compare both halves
        ListNode* head1 = head;
        ListNode* head2 = middle -> next;

        while(head2 != NULL) {
            if(head2->val != head1->val) {
                return 0;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }

        //step4 - repeat step 2
        temp = middle -> next;
        middle -> next = reverse(temp);

        return true;
    }
};