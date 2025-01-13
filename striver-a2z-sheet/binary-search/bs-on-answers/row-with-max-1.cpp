class Solution {
public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int ans = -1; 
        int lowestOne = INT_MAX;  
        
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr[0].size(); j++) {
                if (j > lowestOne) {
                    break;   
                }
                if (arr[i][j] == 1) {
                    if (j < lowestOne) {
                        lowestOne = j;  
                        ans = i;  
                    }
                    break;  
                }
            }
        }
        
        return ans;
    }
};