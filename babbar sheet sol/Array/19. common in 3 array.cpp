// https://www.geeksforgeeks.org/problems/common-elements1132/1 

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int i=0, j=0, k=0;
            vector<int> ans;
            while(i<n1 && j<n2 && k<n3){
                
                if(A[i]==B[j] && B[j]==C[k]){
                    ans.push_back(A[i]); 
                    
                    // remove duplicates
                    while(A[i]==A[i+1] && i<n1-1){
                        i++;
                    }
                    while(B[j]==B[j+1] && j<n2-1){
                        j++;
                    }
                    while(C[k]==C[k+1] && k<n3-1){
                        k++;
                    } 
                    
                    i++; j++; k++;
                }

                // increment if smaller as arrays are sorted  
                else if(A[i]<B[j] || A[i]<C[k]){
                    i++;
                }else if(B[j]<A[i] || B[j]<C[k]){
                    j++;
                }else{
                    k++;
                }
            }
            return ans;
        }

};