#  https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/description/

class Solution {
public:
    int minSwaps(string s) {
        int j=0,count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='[') j++;
            else{
                j--;
                if(j<0){
                    count++;
                    j=0;
                }
            }
        }
        return (count+1)/2;
    }
};