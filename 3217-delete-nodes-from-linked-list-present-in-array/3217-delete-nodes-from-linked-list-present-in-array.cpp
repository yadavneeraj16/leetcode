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
   // ListNode* delete(ListNode* head,int d){
//         ListNode *tmp=head;
//         ListNode* ptr;
        
//         if(head->val==d){
//             head=head->next;
//             return head;
//         }
//         // if(head->next->val==d){
//         //     head->=head->next;
//         //     return head;
//         // }
//         while(tmp->val!=d)
//         {
//             tmp=tmp->next;
//         }
        
   // }
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        int n=nums.size();
       unordered_set<int> s(nums.begin(), nums.end());
        
        ListNode* newHead = new ListNode(0);
        newHead-> next = head;
        ListNode* prev = newHead;
        ListNode* current = head;
        
        while(current != NULL)
        {
            if(s.find(current-> val) != s.end())
            {
                prev-> next = current-> next;
                delete current;
                current = prev-> next;
            }
            else
            {
                prev = current;
                current = current-> next;
            }
        }
        ListNode* result = newHead-> next;
        delete newHead;
        return result;
    }
};