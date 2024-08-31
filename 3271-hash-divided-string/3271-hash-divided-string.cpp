class Solution {
public:
    string stringHash(string s, int k) 
    {
        int n=s.length();
        string res="";
        int r=n/k;
        string alfa="abcdefghijklmnopqrstuvwxyz";
        int sum=0;
        for(int i=1;i<=r;i++)
        {
            int l=(i-1)*k;
            for(int j=l;j<i*k;j++)
            {
                char ch=s[j];
                int a=int(ch)-97;
                sum=sum+a;
                
            }
            res=res+alfa[sum%26];
            sum=0;
            
        }
        return res;
    }
};