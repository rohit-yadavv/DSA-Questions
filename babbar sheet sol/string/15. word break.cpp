// ! https://leetcode.com/problems/word-break/

// ? recursion and memorization 
class Solution {
public:

    unordered_set<string> st;
    int n;
    int dp[301];

    bool solve(int idx, string& s){
        if(idx==n){
            return true;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        if(st.find(s)!=st.end()){
            return true;
        }
        for(int l=0; l<=n; l++){
            string temp=s.substr(idx, l);
            if(st.find(temp)!=st.end() && solve(idx+l, s)){
                return dp[idx]=true;
            }
        }
        return dp[idx]= false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        n = s.size();

        memset(dp, -1, sizeof(dp));
        
        for(string&word: wordDict){
            st.insert(word);
        }

        return solve(0, s);
    }
};