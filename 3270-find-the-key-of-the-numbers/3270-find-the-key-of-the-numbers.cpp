class Solution {
public:
    int generateKey(int a, int b, int c) {
        
       // int m=max(a,max(b,c));
        vector<int>d(4,0);
        vector<int>e(4,0);
        vector<int>f(4,0);
        vector<int>ans(4,0);
        
        int i=0;
        while(a>0)
        {
            d[i]=(a%10);
            a=a/10;
            i++;
        }
         i=0;
        while(b>0)
        {
            e[i]=(b%10);
            b=b/10;
            i++;
        }
         i=0;
        while(c>0)
        {
            f[i]=(c%10);
            c=c/10;
            i++;
        }
        reverse(d.begin(),d.end());
        reverse(e.begin(),e.end());
        reverse(f.begin(),f.end());
        int sum=0;
        for(int i=0;i<4;i++)
        {
            ans[i]=min(d[i],min(e[i],f[i]));
            sum=sum+ans[i]*pow(10,3-i);
        }
        return sum;
        
        
        
    }
};