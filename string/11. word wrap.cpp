//! https://www.geeksforgeeks.org/problems/word-wrap1646/1

class Solution {
public:
    int solve(vector<int>& arr, int i , int rem , int k ,vector<vector<int>>&dp){
      
        if(i==arr.size())return 0;
        
        if(dp[i][rem+1]!=-1){
          return dp[i][rem+1];
        }
        int ans;
        
        if(rem-arr[i]<0){
          ans=(rem+1)*(rem+1)+solve(arr, i+1, k-arr[i]-1, k, dp);
        }else{
          int ch1=(rem+1)*(rem+1)+solve(arr, i+1, k-arr[i]-1, k, dp);
          int ch2=solve(arr, i+1, rem-arr[i]-1, k, dp);
          ans=min(ch1, ch2);
        }
        return dp[i][rem+1]=ans;
    } 
    
    int solveWordWrap(vector<int>nums, int k) {  
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(k+2,-1));
        return solve(nums,0,k,k,dp);
    }
        
};

