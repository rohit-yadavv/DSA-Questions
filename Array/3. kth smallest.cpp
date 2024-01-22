/*
https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1
*/

class Solution{
    public: 
    int kthSmallest(int arr[], int l, int r, int k) {  
        int n=(r-l)+1;
        sort(arr,arr+n);
        return arr[k-1];
    }
};