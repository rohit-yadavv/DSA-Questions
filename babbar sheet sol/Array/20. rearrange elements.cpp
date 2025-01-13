// * Type 1 :
// ? https://leetcode.com/problems/rearrange-array-elements-by-sign/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int positive=0;
        int negative=1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0){
                ans[negative]=nums[i];
                negative+=2;
            }else{
                ans[positive]=nums[i];
                positive+=2;
            }
        }
        return ans;
    }
};

// ! ===============================================================================================
// * Type 2 :
// ? https://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/

class Solution{
public: 
	void rearrange(int arr[], int n) {
	    vector<int>pos, neg;
	    
	    for(int i=0; i<n; i++){
	        if(arr[i]<0){
	            neg.push_back(arr[i]);
	        }else{
	            pos.push_back(arr[i]);
	        }
	    }
	    
	    if(pos.size()>neg.size()){ 
	        for(int i=0; i<neg.size(); i++){
	            arr[2*i] = pos[i];
	            arr[2*i+1] = neg[i]; 
	        }
	        int index = neg.size()*2;
	        for(int i=neg.size(); i<pos.size(); i++){
	            arr[index] = pos[i];
	            index++;
	        }
	    }else{ 
	        for(int i=0; i<pos.size(); i++){
	            arr[2*i] = pos[i];
	            arr[2*i+1] = neg[i]; 
	        }
	        int index= pos.size()*2;
	        for(int i=pos.size(); i<neg.size(); i++){
	            arr[index] = neg[i];
	            index++;
	        } 
	    }
	}
};