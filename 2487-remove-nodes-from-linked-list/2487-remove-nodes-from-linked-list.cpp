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
    ListNode* removeNodes(ListNode* head) {
        vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
       // vector<int>right(n,)
        int right[n];
        right[n-1]=v[n-1];
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],v[i]);
                
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(right[i]==v[i]){
                ans.push_back(v[i]);
            }
        }
        ListNode* ntemp=new ListNode(ans[0]);
        temp=ntemp;
        for(int i=1;i<ans.size();i++)
        {
             ListNode* nwtemp=new ListNode(ans[i]);
            ntemp->next=nwtemp;
            ntemp=ntemp->next;
        }
        ntemp->next=NULL;
        return temp;
    }
};