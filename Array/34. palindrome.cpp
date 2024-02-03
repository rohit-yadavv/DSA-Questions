//? https://www.geeksforgeeks.org/problems/palindromic-array-1587115620/1

class Solution {
public:
    int PalinArray(int a[], int n)
    {
        for(int i=0; i<n; i++){
            int curr =a[i];
            int rev =0;
            
            while (curr > 0){ 
                rev = rev*10 + curr%10;
                curr /= 10;
            } 
            
            if(a[i] != rev) return 0;
        }
        return 1;
    }
};