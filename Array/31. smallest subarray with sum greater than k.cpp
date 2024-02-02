//? https://www.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1

class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int currentSum=0, minLen=n+1;
        
        int start=0, end=0;
        
        while(end<n){
            while(currentSum <= x && end<n) 
                currentSum += arr[end++];
                
            while(currentSum > x && start<n){
                if(end-start < minLen) 
                    minLen = end-start;
                    
                currentSum -= arr[start++];
            }
        }
        return minLen;
        
    }
};