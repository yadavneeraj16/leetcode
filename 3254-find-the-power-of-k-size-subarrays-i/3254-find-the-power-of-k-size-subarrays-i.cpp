class Solution {
public:
    


    
    
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;int c=0;
        int f=-1;
        n=n-k;
        //
            
        for(int i=0;i<=n;i++)
        {
             int max_element = nums[i];
            for(int j=i;j<i+k-1;j++)
            {
                if(nums[j]+1==nums[j+1])
                {
                    c++;
                   
                }
                
                
            }
           if(c==k-1)
                    {
                        ans.push_back(nums[i+k-1]);
               c=0;
                    }
            else{
                ans.push_back(-1);
                c=0;
                }
           
        }
        return ans;
    }
};