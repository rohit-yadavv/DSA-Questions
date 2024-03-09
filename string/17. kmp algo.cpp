// ! https://www.geeksforgeeks.org/problems/longest-prefix-suffix2527/1
class Solution
{
public:
  int lps(string s)
  {
    vector<int> lpst(s.size(), 0);
    int pre = 0, suf = 1;

    while (suf < s.size())
    {
      if (s[pre] == s[suf])
      {
        lpst[suf] = pre + 1;
        pre++, suf++;
      }
      else
      {
        if (pre == 0)
        {
          lpst[suf] = 0;
          suf++;
        }
        else
        {
          pre = lpst[pre - 1];
        }
      }
    }
    return lpst[s.size() - 1];
  }
};