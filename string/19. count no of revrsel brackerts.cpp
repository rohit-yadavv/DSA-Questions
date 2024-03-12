// ! https://www.geeksforgeeks.org/problems/count-the-reversals0401/1
int countRev (string s){
    int len=s.length();

    if(len%2 != 0){
        return -1;
    }

    int ans=0;
    stack<int> st;
    for(int i=0; i<len; i++){
        
        if(s[i]=='{'){
            st.push(s[i]);
        }
        else if((s[i]=='}'&& st.empty()) || (s[i]=='}' && st.top()!='{') ){
             st.push('{');  
             ans++;
        }
        else{
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
    }
    ans=ans+st.size()/2;
    return ans; 
}