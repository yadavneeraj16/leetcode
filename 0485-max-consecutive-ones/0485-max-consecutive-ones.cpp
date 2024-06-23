class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                c++;
                ans=max(c,ans);
            }
            else{
                c=0;
            }
        }
        return ans;
    }
};