class Solution {
public:
    int maxOperations(string s) {
        // int n=s.length();
        // string p=s;
        // for(int i=0;i<n;i++)
        // {
        //     if(p[i]=='1'){
        //         o++;
        //     }
        // }
        // int z=n-o;
        // string ans="";
        // for(int i=0;i<z;i++){
        //     ans=ans+'0';
        // }
        // for(int i=0;i<o;i++)
        // {
        //     ans=ans+'1';
        // }
        int n = s.length(), cnt = 0, ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                ans += cnt;
                while(i < n && s[i] != '1'){
                    i++;
                }
            }
            cnt++;
        }
        return ans;
        
        
    }
};