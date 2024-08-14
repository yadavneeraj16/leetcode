#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n=str.size();
        if(n==1) return str[0];
        int m=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int k=str[i].length();
            if(k<m){
                m=k;
            }
        }
        //sort(str.begin(),str.end());
        string ans="";
         int c=0;
        for(int j=0;j<m;j++)
        {
            //string s=str[i];
           for(int i=0;i<n-1;i++)
           {
               if(str[i][j]==str[i+1][j])
               {
                   c++;
                    if(c==n-1){
                ans=ans+str[i][j];
                        c=0;
                }
               }
               
               else{
                  return ans;
                   
               }
           }
            
            
        }
        return ans;
    }
};