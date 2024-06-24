class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>v;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int s=0,e=n-1;
        int k=n/2;
        while(k--)
        {
          double sum=nums[s]+nums[e];
            double avg=sum/2;
            v.push_back(avg);
            s++;
            e--;
        }
         sort(v.begin(),v.end());
        return v[0];
        
    }
};