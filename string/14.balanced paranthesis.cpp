// ! https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1

 bool ispar(string x){
        int len = x.size();
        if (len == 1){
            return false;
        }
        stack<char> st;
        int i = 0;
        while (i < len){
            if (x[i] == '(' || x[i] == '{' || x[i] == '['){
                st.push(x[i]);
            }
            else{
                if (st.empty()){
                    return false; 
                }
                if (x[i] == ')' && st.top() == '('){
                    st.pop();
                }
                else if (x[i] == '}' && st.top() == '{'){
                    st.pop();
                }
                else if (x[i] == ']' && st.top() == '['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            i++;
        }
        return st.empty();
    }