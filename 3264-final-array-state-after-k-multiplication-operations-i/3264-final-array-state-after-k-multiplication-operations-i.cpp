class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int m) {
        int n=nums.size();
        int c=1;
        for(int i=0;i<k;i++)
        {
            int mini=*min_element(nums.begin(),nums.end());
            for(int i=0;i<n;i++)
            {
                if(nums[i]==mini&&c==1)
                {
                    nums[i]=m*nums[i];
                    //c=0;
                    break;
                }
            }
            
        }
        return nums;
    }
};