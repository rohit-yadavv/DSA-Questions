/* 
https://leetcode.com/problems/removing-minimum-and-maximum-from-array/ 
*/


class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int minIndex=0;
        int maxIndex=0;
        int minValue = nums[0];
        int maxValue=nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i]<minValue){
                minValue = nums[i];
                minIndex = i;
            }
            if(nums[i]>maxValue){
                maxValue = nums[i];
                maxIndex = i;
            }
        }
    
        int frontRemoveBoth = max(maxIndex, minIndex) + 1;
        int backRemoveBoth = nums.size() - min(minIndex, maxIndex);
        int frontBack = (min(minIndex, maxIndex) + 1) + (nums.size() - max(minIndex, maxIndex));
		
        return min(min(frontRemoveBoth, backRemoveBoth), frontBack);
    }
};