class Solution {
public:
    bool reportSpam(vector<string>& v, vector<string>& b) 
    {
        map<string,int>mp;
        set<string>st;
        set<string>bt;
        int n=v.size();int c=0;
        int m=b.size();
        // for(int i=0;i<n;i++){
        //     st.insert(v[i]);
        // }
//         for(int i=0;i<m;i++)
//         {
//             bt.insert(b[i]);
           
//         }
        for(auto it:b){
            mp[it]++;
        }
          for(auto itt:v)
        {
          // mp[itt]++;
            
            if(mp[itt]>=1)
            {
                c++;
            
            if(c>1)
                return true;
        }
        }return false;
    }
};