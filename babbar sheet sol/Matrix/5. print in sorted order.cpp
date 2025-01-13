//?https://www.geeksforgeeks.org/problems/sorted-matrix2333/1


class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> mat) {
        vector<int>ans;
        
        for(int i = 0 ; i < N;i++){
            for(int j = 0 ; j < N;j++){
                ans.push_back(mat[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
        
        int idx=0;
        for(int i = 0 ; i < N;i++){
            for(int j = 0 ; j < N;j++){
                mat[i][j]=ans[idx++];
            }
        }
        return mat;
    }
};