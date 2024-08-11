class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
       // vector<int>ans;
        int n=nums2.size();
        vector<int>ans(n,-1);
        stack<int>s;
        ans[n-1]=-1;
       
        s.push(nums2[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            
            while(!s.empty()&&s.top()<=nums2[i])
            {
                s.pop();
                
            }
            if(s.empty()){
                ans[i]=-1;
                s.push(nums2[i]);
            }
            else
            {
            ans[i]=s.top();
            s.push(nums2[i]);
            }
        }
        vector<int>v(nums1.size(),-1);
        for(int i=0;i<n;i++)
        {
            m[nums2[i]]=ans[i];
        }
        for(auto it:m){
            ans.push_back(it.second);
        }
        for(int i=0;i<nums1.size();i++)
        {
            nums1[i]=m[nums1[i]];
        }
        return nums1;
        
    }
};