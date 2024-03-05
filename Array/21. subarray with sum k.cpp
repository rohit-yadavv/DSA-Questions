// ? https://leetcode.com/problems/subarray-sum-equals-k/description/ 

class Solution {
public:
    int subArraySum(vector<int>& nums, int k) {
        map<int, int> preSumsMap;
        preSumsMap[0]++;
        int count=0;
        int preSum=0;

        for(int i=0; i<nums.size(); i++){
            preSum=preSum+nums[i]; 
            int requiredSum=preSum-k;

            count += preSumsMap[requiredSum];
            preSumsMap[preSum]++;   
        }
        return count;
    }
}; 