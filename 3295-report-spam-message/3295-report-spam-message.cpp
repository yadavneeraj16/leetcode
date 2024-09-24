class Solution {
public:
    bool reportSpam(vector<string>& v, vector<string>& b) 
    {
        map<string,int>mp;
        
        int c=0;
       
        for(auto it:b){
            mp[it]++;
        }
          for(auto itt:v)
        {
          
            
            if(mp[itt]>=1)
            {
                c++;
            
            if(c>1)
                return true;
        }
        }return false;
    }
};