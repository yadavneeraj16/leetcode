class Solution {
public:
  void generate(int i, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
    if (i == nums.size()) {
        result.push_back(current);
        return;
    }
    // Exclude the current element
    generate(i + 1, nums, current, result);

    // Include the current element
    current.push_back(nums[i]);
    generate(i + 1, nums, current, result);
    current.pop_back();  // Backtrack
}
    vector<vector<int>> subsets(vector<int>& nums) {
        
       vector<vector<int>> result;
    vector<int> current;
    generate(0, nums, current, result);
    return result;
        
        
    }
};