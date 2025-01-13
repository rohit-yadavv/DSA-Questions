// https://www.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1
class Solution {
public:
vector<int> factorial(int N){
        vector<int>ans(1,1);
        while(N>1){
            int res;
            int size=ans.size();
            int carry=0;
            
            for(int i=0;i<size;i++){
                res=ans[i]*N+carry;
                carry=res/10;
                ans[i]=(res%10);
            }
            while(carry){
                ans.push_back(carry%10);
                carry=carry/10;
            }
            N--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};