//? https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        unordered_map<int, int>mapp;
        for(int i=0; i<nums.size(); i++){
            mapp[nums[i]]++;
        }
        nums.clear();
        for(auto it: mapp){
            if(it.second>1){
                nums.push_back(it.first);
            }
        }

        return nums;
    }
};