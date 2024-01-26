// https://leetcode.com/problems/jump-game-ii/submissions/1155312521/
// https://www.youtube.com/watch?v=wLPdkLM_BWo


class Solution {
public:
    int jump(vector<int>& nums) {
        int farthest=0;
        int last=0;
        int jump=0;
        for(int i=0; i<nums.size()-1; i++){
            farthest = max(farthest, nums[i]+i);
            if(last==i){
                last=farthest;
                jump++;
            }
        } 
        return jump;
    }
};