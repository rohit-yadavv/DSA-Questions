// https://leetcode.com/problems/sort-colors/description/ 

// brute force:
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if(nums[i]<nums[j]){
                    swap(nums[i], nums[j]);
                }
            }
        }
    }
};



// to sort 0, 1
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {        
        int n = nums.size();
        
        int low = 0;
        int high = n-1;
        
        while(low<=high){
            if(nums[low]==0){
                low++;
            }else{
                swap(nums[low], nums[high]);
                high--;
            }
        }
        return nums;
    }
};