// https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
class Solution{
    public: 
    long long maxSubarraySum(int arr[], int n){
        
        long long maxSum=INT_MIN;
        long long currentSum = 0;
        
        for(int i=0; i<n; i++){ 
            currentSum = currentSum + arr[i];
            if(maxSum < currentSum){
                maxSum = currentSum;
            }
            if(currentSum<0){
                currentSum=0;
            }
        }
        return maxSum;
    }
};