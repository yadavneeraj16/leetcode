class Solution {
public:
    string clearDigits(string s) 
    {
        int n=s.length();
        string ans="";
        
        int i=0;
        while(i<n)
        {
            if(!isdigit(s[i])){
                ans=ans+s[i];
                i++;
            }
            else
            {
                i++;
                if(ans.size()>=1)
                {
                    ans.pop_back();
                }
            }
        }
         return ans;
      }
      
    
        
    
};