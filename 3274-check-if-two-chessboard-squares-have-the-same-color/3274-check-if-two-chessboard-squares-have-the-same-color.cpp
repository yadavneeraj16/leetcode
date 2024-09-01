class Solution {
public:
    bool checkTwoChessboards(string a, string b) {
        
        int c=int(a[0])%2;
        int d=int(b[0])%2;
        
        int e=a[1]%2;
        int f=b[1]%2;
        int t=0,g=0;
        if(c==d)
        {
            t=1;
        }
        if(e==f){
            g=1;
        }
        
        
        
        if(t==g) return true;
       else return false;
        
    }
};