class Solution {
public:
    int binarysearch(vector<int>& arr,int s,int e,int k){
        int mid=(s+e)/2;
        while(s<=e)
        {
            if(arr[mid]==k)
            {
                return mid;
            }
            else if(arr[mid]>k){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=(s+e)/2;
        }
        return -1;
    }
    int pivot(vector<int>& nums){
        int s=0;
        int e=nums.size()-1;
         int mid=(s+e)/2;
        while(s<e)
        {
            
            if(nums[mid]>=nums[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=(s+e)/2;
        }
        return s;
    }
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int p=pivot(nums);
        
      int f=binarysearch(nums,0,p-1,target);
      int d=binarysearch(nums,p,e,target);
        if(f==-1&&d==-1){
            return d;
        }
        else
        {
            return max(f,d);
        }
       
    }
//     int search(vector<int>& arr,  int k) {
//         int n=arr.size();
//     int low = 0, high = n - 1;
//     while (low <= high) {
//         int mid = (low + high) / 2;

//         //if mid points the target
//         if (arr[mid] == k) return mid;

//         //if left part is sorted:
//         if (arr[low] <= arr[mid]) {
//             if (arr[low] <= k && k <= arr[mid]) {
//                 //element exists:
//                 high = mid - 1;
//             }
//             else {
//                 //element does not exist:
//                 low = mid + 1;
//             }
//         }
//         else { //if right part is sorted:
//             if (arr[mid] <= k && k <= arr[high]) {
//                 //element exists:
//                 low = mid + 1;
//             }
//             else {
//                 //element does not exist:
//                 high = mid - 1;
//             }
//         }
//     }
//     return -1;

};