// https://leetcode.com/problems/find-the-duplicate-number/

// 1. using brute force
// 1. sort then find 
// 2. make a another array store frequency of each means if 5 comes 2 times then arr[5]=2 
// 3. make index of value as -ve 
// 4. floyd's cycle detection algo (without modifying the array)
 


//approach 3 
class Solution {
public:
    int findDuplicate(vector<int>& nums) { 
        for(int i=0; i<nums.size(); i++){

            int index = abs(nums[i]);
            if(nums[index]<0) return index;
            nums[index] = -nums[index];
        }
        return -1;
    }
};

// approach 4
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0]; 
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        
        fast = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};