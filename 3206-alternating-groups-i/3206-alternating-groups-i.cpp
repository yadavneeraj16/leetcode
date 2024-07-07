class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& c) {
        int n=c.size();
        int a=c[0];
        int b=c[n-1];
        int d=c[1];
        int e=c[n-2];
        int ans=0;
        if(b==0&&a==1&&d==0||b==1&&a==0&&d==1) ans++;
       if(e==0&&b==1&&a==0||e==1&&b==0&&a==1) ans++;
        for(int i=0;i<n-2;i++)
        {
             if(c[i]==0&&c[i+1]==1&&c[i+2]==0||c[i]==1&&c[i+1]==0&&c[i+2]==1) 
                 ans++;
        }
        
        return ans;
        
    }
};