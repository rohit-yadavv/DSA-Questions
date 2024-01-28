// * Type 1 :
// ? https://leetcode.com/problems/rearrange-array-elements-by-sign/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int positive=0;
        int negative=1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0){
                ans[negative]=nums[i];
                negative+=2;
            }else{
                ans[positive]=nums[i];
                positive+=2;
            }
        }
        return ans;
    }
};

// ! ===============================================================================================
// * Type 2 :
// ? https://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/
