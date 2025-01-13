/*
Reverse String 
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        int i = 0;
        int j = size;
        for(i=0, j=size-1; i<size/2; i++, j--){
            swap(s[i], s[j]);
        }
    }
};