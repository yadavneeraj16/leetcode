class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
        int mini=INT_MAX;
        int pr=0;
        for(int i=0;i<n;i++)
        {
            mini=min(mini,p[i]);
            pr=max(pr,p[i]-mini);
        }
        return pr;
    }
};