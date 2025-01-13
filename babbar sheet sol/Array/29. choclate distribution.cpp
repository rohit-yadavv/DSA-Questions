// https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

class Solution{
    public: 
    long long findMinDiff(vector<long long> a, long long n, long long m){
        
        long long int mini=INT_MAX;
        sort(a.begin(),a.end());
        
        for(int i=0;i<n-m+1;i++) {
            mini=min(mini, abs(a[i+m-1]-a[i]));
        }
        return mini;
    }   
};


class Solution{
    public:
    
    long long findMinDiff(vector<long long> a, long long n, long long m){
        
        long long int ans=INT_MAX;
        
        sort(a.begin(),a.end());
        
        for(int i=0;i<=n-m;i++){
            
            long long int mini=a[i];
            long long int maxi=a[i+m-1];
            long long int diff=maxi-mini;
            
            if(ans>diff){
                ans=diff;
            }
        }
        return ans;
    }   
};
