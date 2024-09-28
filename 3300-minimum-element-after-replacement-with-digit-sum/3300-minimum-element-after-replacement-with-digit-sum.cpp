class Solution {
public:
    int minElement(vector<int>& nums) {
        
        int n=nums.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            int x=nums[i];
            int d=0;
            while(x>0)
            {
                 d+=x%10;
                x=x/10;
                
            }
            ans=min(ans,d);
        }return ans;
    }
};