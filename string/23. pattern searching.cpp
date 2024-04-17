//? https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

class Solution
{
public:
  int strStr(string haystack, string needle)
  {

    int n = needle.size();
    int m = haystack.size();

    for (int i = 0; i < m; i++)
    {
      if (needle == haystack.substr(i, n))
      {
        return i;
      }
    }

    return -1;
  }
};