// https://www.geeksforgeeks.org/problems/minimize-the-heights3351/1

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        
        int ans = arr[n-1] - arr[0];
        
        int smallest = arr[0] + k;
        int largest = arr[n-1] - k;
        int mini, maxi;
        
        for(int i=1; i<n; i++){
            // we don't want to run max for last index as it is largest only
            maxi = max(largest, arr[i-1] + k); 

            // we don't want to run min for first index as it is smallest only
            mini = min(smallest, arr[i] - k);
            
            if(mini < 0) continue;
            
            ans = min(ans, maxi-mini);
        }
        return ans;
    }
};