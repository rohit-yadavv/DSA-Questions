//? https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1

class Solution {
public:
    int rowWithMax1s(vector<vector<int>> arr, int m, int n) {
        int rowIndex = -1;
        int rowMaxSum = 0;
        
        for (int i = 0; i < m; i++) { 
            auto it = lower_bound(arr[i].begin(), arr[i].end(), 1);
            int idx = it - arr[i].begin();
            int count=n-idx; 
        
            if (count > rowMaxSum) {
                rowMaxSum = count;
                rowIndex = i;
            }
        }
        return rowIndex;
    }
};
