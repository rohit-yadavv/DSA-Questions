//? https://leetcode.com/problems/minimum-window-substring/description/

class Solution
{
public:
  string minWindow(string s, string t)
  {
    unordered_map<char, int> freqmap;
    for (char c : t)
      freqmap[c]++;

    int start = 0, minlen = INT_MAX, left = 0, count = t.size();

    for (int right = 0; right < s.size(); right++)
    {
      if (freqmap[s[right]] > 0)
        count--;
      freqmap[s[right]]--;
      while (count == 0)
      {
        if (right - left + 1 < minlen)
        {
          minlen = right - left + 1;
          start = left;
        }
        freqmap[s[left]]++;
        if (freqmap[s[left]] > 0)
          count++;
        left++;
      }
    }
    return minlen == INT_MAX ? "" : s.substr(start, minlen);
  }
};
