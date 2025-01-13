// ! https://leetcode.com/problems/palindromic-substrings/description/
#include <iostream>>
using namespace std;

class Solution {
private:
    string temp;
    int check(int l, int r, int ans = 0){
        while(l >= 0 && r <= temp.size()){
            if(temp[l--] == temp[r++]) ans++;
            else break;
        }
        return ans;
    }
public:
    int countSubstrings(string s) {
        int n = size(s), ans = 0;
        temp = s;
        for(int i = 0; i < n; i++){
            ans += check(i,i);    // odd length palindromes
            ans += check(i,i+1); // even length palindromes
        }
        return ans;
    }
};