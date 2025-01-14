class Solution {
 public:
  bool isIsomorphic(string s, string t) {
    // Store the last-seen position of each character
    vector<int> indexS(200, -1);
    vector<int> indexT(200, -1);

    if (s.length() != t.length()) {
      return false;
    }

    for (int i = 0; i < s.length(); i++) {
      // Check if the last-seen positions match
      if (indexS[s[i]] != indexT[t[i]]) {
        return false;
      }

      // Update the last-seen position (use i + 1 to avoid confusion with default 0)
      indexS[s[i]] = i;
      indexT[t[i]] = i;
    }

    return true;
  }
};
