class Solution {
public:
    
    int numberOfAlternatingGroups(vector<int>& c, int k) {
        
        for(int i=0;i<k-1;i++)
        {
            c.push_back(c[i]);
            
        }
        int a=1;
        int ans=0;
        int n=c.size();
        for(int i=0;i<n-1;i++)
        {
           
            
                if(c[i]!=c[i+1])
                {
                    a++;
                   
                }
            else
            {
                a=1;
            }
            
            if(a>=k)
            {
                ans++;
            }
            
        }
        return ans;
    }
    
    
    
    
};