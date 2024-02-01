// https://leetcode.com/problems/trapping-rain-water/

// 1.
class Solution {
public:
    int trap(vector<int>& height) { 
        int waterTrapped=0;
        
        for(int i=0; i<height.size(); i++){
            int leftMax=0, rightMax=0;
            int left=i, right=i;

            while(left>=0){
                leftMax=max(leftMax, height[left]);
                left--;
            } 
            while(right<height.size()){
                rightMax=max(rightMax, height[right]);
                right++;
            }
            waterTrapped += min(leftMax, rightMax) - height[i];
        } 
        return waterTrapped;
    }    
};


// 2. 
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> leftMax(height.size());
        vector<int> rightMax(height.size());

        leftMax[0]=height[0];
        for(int i=1; i<n; i++){
            leftMax[i] = max(leftMax[i-1], height[i]);
        }

        rightMax[n-1]=height[n-1];
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], height[i]);
        }

        int waterCount=0;
        for(int i=0; i<n; i++){ 
            waterCount += min(leftMax[i], rightMax[i])-height[i];
        }
        return waterCount;
    }         
};