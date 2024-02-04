//? https://www.geeksforgeeks.org/problems/find-the-median0527/1

class Solution {
public: 
	int find_median(vector<int> v){
        sort(v.begin(), v.end());

        int n = v.size();
        int res;
        if (n%2==1) {
            res = v[n/2];
        } else {
            res = (v[(n/2)-1] + v[n/2])/2;  
        }
        return res; 

    }
};