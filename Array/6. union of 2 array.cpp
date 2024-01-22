// https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1
class Solution{
    public: 
    int doUnion(int a[], int n, int b[], int m) {
        int res[n+m];
        for(int i=0; i<n; i++) {
            res[i] = a[i];
        }
        for(int i=0; i<m; i++) {
            res[i+n] = b[i]; 
        }
        sort(res, res+n+m);
        int duplicate = 0;
        for(int i=1; i<n+m; i++) {
            if (res[i] == res[i-1]) {   
                duplicate++;
            }
        }
        return (n+m-duplicate);
    }

};