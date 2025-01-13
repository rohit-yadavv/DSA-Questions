# https://www.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence0534/1 

class Solution:
    def secFrequent(self, arr, n):
        mapp = {}
        for ele in arr:
            if ele not in mapp:
                mapp[ele]=1
            else:
                mapp[ele]+=1
                
        sm =  sorted(list(mapp.values())) 
        
        for k,v in mapp.items():
            if v==sm[-2]:
                return k
            
        return 0;
