class Solution {
public:
    int minimumChairs(string s) {
        
        int n=s.length();
        int e=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='E') e++;
            if(s[i]=='L') e--;
            ans=max(ans,e);
            
        }
        return ans;
    }
};