// https://www.geeksforgeeks.org/problems/array-subset-of-another-array2317/1

string isSubset(int a1[], int a2[], int n, int m) {
    
    unordered_map<int, int> mapp;
    for(int i=0; i<n; i++){
        mapp[a1[i]]++; 
    }
    
    for(int i=0; i<m; i++){ 
        if(mapp.find(a2[i])==mapp.end()){
            return "No";
        }else{
            mapp[a2[i]]--;
            if(mapp[a2[i]]==0){
                mapp.erase(a2[i]);
            }
        }
        
    }
    return "Yes";
}