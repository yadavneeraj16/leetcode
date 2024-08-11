class Solution {
public:
    int solve(vector<int>& num, int n){
       vector<int>dp(n+1,INT_MAX);
       dp[0]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<num.size();j++)
            {
                if((i-num[j])>=0&&dp[i-num[j]]!=INT_MAX)
                {
                    dp[i]=min(dp[i],1+dp[i-num[j]]);
                }
            }
        }
        if(dp[n]==INT_MAX){
            return -1;
        }
        return dp[n];
    }
    int coinChange(vector<int>& num, int n) 
    {
       // vector<int>dp(n+1,-1);
        int ans=solve(num,n);
        return ans;
    }
};