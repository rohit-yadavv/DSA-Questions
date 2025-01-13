class Solution {
public:
    string removeOuterParentheses(string s) {

        int startingBracketCount = 0;
        string ans;
        for (auto ele : s) {
            if (ele == '(') {
                if (startingBracketCount > 0) {
                    ans.push_back('(');
                }
                startingBracketCount++;
            } else {
                startingBracketCount--;
                if (startingBracketCount > 0) {
                    ans.push_back(')');
                }
            }
        }
        return ans;
    }
};