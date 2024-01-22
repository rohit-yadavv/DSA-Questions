// https://leetcode.com/problems/intersection-of-two-arrays/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(auto i : nums1){
            if(count(nums2.begin(),nums2.end(),i)>0){ 
                if(count(result.begin(),result.end(),i)==0){ 
                    result.push_back(i);
                }
            }
        }
        return result;
    }
};