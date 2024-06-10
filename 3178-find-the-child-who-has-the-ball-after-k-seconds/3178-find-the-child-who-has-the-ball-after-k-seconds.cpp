class Solution {
public:
    int numberOfChild(int n, int k) {
        
        int p=0,ans=1;
        for(int i=0;i<k;i++)
        {
            p=p+ans;
            if(p==n-1){
                ans=-1;
                
            }
            else if(p==0){
                ans=1;
            }
        }
        return p;
    }
};