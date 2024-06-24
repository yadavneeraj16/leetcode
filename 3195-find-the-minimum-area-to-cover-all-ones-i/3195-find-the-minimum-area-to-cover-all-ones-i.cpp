class Solution {
public:
    int minimumArea(vector<vector<int>>& g) {
        int n=g.size();
        int m=g[0].size();
        vector<int>h;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==1)
                {
                    h.push_back(i);
                    v.push_back(j);
                }
            }
        }
        sort(h.begin(),h.end());
        sort(v.begin(),v.end());
        int a=h.size();
        int b=v.size();
        
        return (h[a-1]-h[0]+1)*(v[b-1]-v[0]+1);
    }
};

        