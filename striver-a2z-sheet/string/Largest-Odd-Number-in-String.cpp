class Solution {
public:
    string largestOddNumber(string num) {
        // iterate form last

        int oddNumberFromLast = num.size();

        while (oddNumberFromLast >= 0) {
            if ((int)num[oddNumberFromLast] % 2 != 0) {
                break;
            } else {
                oddNumberFromLast--;
            }
        }
        cout<<oddNumberFromLast;
        if(oddNumberFromLast < 0){
            return "";
        }
        return num.substr(0, oddNumberFromLast + 1);
    }
};