# https://leetcode.com/problems/restore-ip-addresses/

class Solution:
    def restoreIpAddresses(self, s: str):
        res = []

        def isvalid(s):
            if s[0] == '0':
                return False
            val = int(s)
            return val<256

        def helper(i, ans, par):
            if(i==len(s) or par==4):
                if(len(s)==i and par==4):
                    res.append(ans[:len(ans)-1])
                return

            helper(i + 1, ans + s[i] + ".", par + 1)

            if (i + 1 < len(s) and isvalid(s[i:i + 2])):
                helper(i + 2, ans + s[i:i + 2] + ".", par + 1)
                
            if (i + 2 < len(s) and isvalid(s[i:i + 3])):
                helper(i + 3, ans + s[i:i + 3] + ".", par + 1)

        helper(0, "", 0)
        return res

        