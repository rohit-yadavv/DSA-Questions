// https://www.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1 

// 1. brute force  

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        int res=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]+arr[j]==k){
                    res++;
                }
            }
        }
        return res;
    }
};



// 2. using map

class Solution {
public: 
    int getPairsCount(int arr[], int n, int k) {
        // Initialize counter for pairs
        int count = 0;

        // Map to store the frequency of elements encountered
        map<int, int> m;
 
        for (int i = 0; i < n; i++) {
            // Calculate the required value to reach the target sum
            int required = k - arr[i];

            // Check if the required value is found in the map
            if (m.find(required) != m.end()) {
                // Increment the count by the frequency of the required element
                count += m[required];
            }

            // Update the frequency of the current element in the map
            m[arr[i]]++;
        }
 
        return count;
    }
};