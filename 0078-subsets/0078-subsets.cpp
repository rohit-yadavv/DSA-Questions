class Solution {
    void solve(int i, vector<int> &nums, vector<vector<int>> &ans, vector<int> &current){
        if (i == nums.size()) {
            ans.push_back(current);
            return;
        } 
        current.push_back(nums[i]);
        solve(i + 1, nums, ans, current);
        current.pop_back();
        solve(i + 1, nums, ans, current);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        solve(0, nums, ans, current);
        return ans;
    }
};
