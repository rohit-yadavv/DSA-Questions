//? https://leetcode.com/problems/reorganize-string/submissions/1241280162/

#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
  string reorganizeString(string s)
  {
    vector<int> hash(26, 0);
    int maxCount = 0;

    for (char &c : s)
    {
      hash[c - 'a']++;
      maxCount = max(maxCount, hash[c - 'a']);
    }

    if (maxCount > (s.size() + 1) / 2)
      return "";

    string res(s.length(), ' ');

    int idx = 0;
    int maxIdx = max_element(hash.begin(), hash.end()) - hash.begin();
    while (hash[maxIdx]-- > 0)
    {
      res[idx] = (char)(maxIdx + 'a');
      idx += 2;
    }

    for (int i = 0; i < hash.size(); i++)
    {
      while (hash[i]-- > 0)
      {
        if (idx >= res.length())
          idx = 1;
        res[idx] = (char)(i + 'a');
        idx += 2;
      }
    }
    return res;
  }
};
