class Solution {
public:
//    int reverseDigits(int num) 
// { 
//     int rev_num = 0; 
//     while (num > 0) { 
//         rev_num = rev_num * 10 + num % 10; 
//         num = num / 10; 
//     } 
//     return rev_num; 
// } 
//     bool issame(int x,int y)
//     {
//         int r=reverseDigits(y);
//         if(x==r)
//         {
//             return true;
//         }
//         return false;
//     }
    bool get (int c,int d){
        vector<int>v;
            // v.push_back();
            // int c=nums[j];
            while(c!=0){
                v.push_back(c%10);
                c=c/10;
            }
            // if(v.size()==1)v.push_back(0);
            reverse(v.begin(),v.end());
            
            int t=0;
            for(int k=0;k<v.size()-1;k++){
                for(int l=k+1;l<v.size();l++){
                    // swap(v[k],v[l]);
                    int a=v[k];
                    int b=v[l];
                    v[k]=b;
                    v[l]=a;
                    int nn=0;
                    for(int m=0;m<v.size();m++){
                        nn=nn*10+v[m];
                    }
                    if(nn==d)return true;
                    v[k]=a;
                    v[l]=b;  
                }

            }
            return false;
}
    int countPairs(vector<int>& nums) 
    { 
        int ctn=0;
        int n=nums.size();
        cout<<n<<endl;
        for(int i=0;i<n-1;i++){
            // cout<<nums[i]<<" ";
            for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
                ctn++;
                continue;
            }
            if(get(nums[j],nums[i]))ctn++;
            else if(get(nums[i],nums[j]))ctn++;
        }

        }
        return ctn;
    }
};