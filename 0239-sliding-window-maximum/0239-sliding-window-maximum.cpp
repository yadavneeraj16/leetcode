class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
    
        int n=nums.size();
//         int m=INT_MIN;
       
//         for(int i=0;i<n-k+1;i++){
//             for(int j=i;j<i+k;j++)
//             {
//                 m=max(m,nums[j]);
                
//             }
    
//             ans.push_back(m);
//             m=INT_MIN;
//         }
        priority_queue<pair<int,int>>pq;int i;
        for(i=0;i<k;i++){
            pq.push({nums[i],i});
        }
        ans.push_back(pq.top().first);
        for(;i<n;i++){
            while(!pq.empty()&&pq.top().second<=i-k) pq.pop();
            pq.push({nums[i],i});
            ans.push_back(pq.top().first);
        }
      return ans;  
    }
};