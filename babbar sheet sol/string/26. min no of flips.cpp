#  https://www.geeksforgeeks.org/problems/min-number-of-flips3210/1


int minFlips (string s)
{
    int c1=0, c2=0;
    
    // c1 = fips to make string as 0 1 0 1 0 1 0 1
    // c2 = fips to make string as 1 0 1 0 1 0 1 0
    
    for(int i=0; i<s.length(); i++){
        if(i%2 && s[i]=='1') c1++;
        if(i%2==0 && s[i]=='0') c1++;
        if(i%2 && s[i]=='0') c2++;
        if(i%2==0 && s[i]=='1') c2++;
    }
    int ans = min(c1, c2);
    return ans;
}