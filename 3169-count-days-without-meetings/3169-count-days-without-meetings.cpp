class Solution {
public:
    int countDays(int days, vector<vector<int>>& m) {
        int n=m.size();int c=0;
        sort(m.begin(),m.end());
        int a=m[0][0];  //s
        int b=m[0][1];  //e
        
        for(int i=1;i<n;i++)
        {
            
            if(m[i][0]<=b){
                b=max(b,m[i][1]);
                
            }
            else
            {
                days-=b-a+1;
                a=m[i][0];
                b=m[i][1];
            }
        }
        days-=b-a+1;
        return days;
    }
};
//vector<bool>v(days,false);
        // sort(m.begin(),m.end());
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=m[i][0];j<=m[i][1];j++)
        //     {
        //         v[j]=true;
        //     }
        // }
        // for(int i=0;i<days;i++){
        //     if(v[i]){
        //         c++;
        //     }
        // }
        // return days-c;