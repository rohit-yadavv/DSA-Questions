// https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1  


class Solution{
    public: 
    bool find3Numbers(int arr[], int n, int X)
    {
        sort(arr, arr+n);
        for(int i=0; i<n; i++){
            
            int low=i+1;
            int high=n-1;
            
            while(low<high){
                int sum=arr[low]+arr[high]+arr[i];
                if(sum==X){
                    return 1;
                }
                else if(sum<X){
                    low++;
                }else{
                    high--;
                }
            }
        }
        return 0;
    }

};
