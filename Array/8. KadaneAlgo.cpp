// https://leetcode.com/problems/maximum-subarray/description/
 
// 1. sum of elements of subarray with largest sum
// 2. Length of the max subarray
// 3. Elements of the max subarray
// 4. Start and End index of max subarray
 


// 1. sum of elements of subarray with largest sum
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int max_so_far = INT_MIN, max_ending_here = 0;  
    
        // for (int i = 0; i < n; i++) {  
        //     max_ending_here = max_ending_here + a[i];  
            
        //     if (max_so_far < max_ending_here)  
        //         max_so_far = max_ending_here;  
    
        //     if (max_ending_here < 0)  
        //         max_ending_here = 0;  
        // }  

        int currentMax = nums[0], maxTillNow=nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            currentMax = max(nums[i], currentMax + nums[i]);
            maxTillNow = max(maxTillNow, currentMax);
        }
        return maxTillNow;
        
    }
};


// 2. Length of the max subarray
int maxSubArrayLength(vector<int>& arr) {
    int currentMax = arr[0], globalMax = arr[0], length = 1; 
    
    for (int i = 1; i < arr.size(); ++i) {
        currentMax = max(arr[i], currentMax + arr[i]);
        globalMax = max(globalMax, currentMax);
        
        if (currentMax == arr[i]) {
            length = 1;
        } else {
            length++;
        }
    }
    return length;
}
 

// 3. Elements of the max subarray
vector<int> subarrayElement(vector<int>& arr) {
    int currentMax = arr[0], globalMax = arr[0], length = 1; 
    vector<int> subArray;
    vector<int> maxSubArray;

    for (int i = 1; i < arr.size(); ++i) {
        currentMax = max(arr[i], currentMax + arr[i]);
        globalMax = max(globalMax, currentMax);
        
        if (currentMax == arr[i]) {
            subArray.clear();
        }
        subArray.push_back(arr[i]);        
        if(currentMax == globalMax){
            maxSubArray = subArray;
        }
    }
    return maxSubArray;
}
 

// 4. Start and End index of max subarray
void startEndIndex(vector<int> &arr){
    int currentStartIndex=0, startIndex=0, endIndex=0;
    int globalMax=INT_MIN, currentMax=0;

    for (int i = 0; i < arr.size(); i++){
        currentMax = arr[i]+currentMax;

        if(currentMax<0){
            currentMax=0;
            currentStartIndex=i+1;
        }

        if(globalMax<currentMax){
            globalMax = currentMax;
            startIndex = currentStartIndex;
            endIndex = i;
        } 
    }   
    cout<<startIndex<<endIndex;
}
