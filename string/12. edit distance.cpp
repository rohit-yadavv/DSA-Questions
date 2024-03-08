// ! https://leetcode.com/problems/edit-distance/

#include <bits/stdc++.h>

class Solution
{
public:
  int rec(int i, int j, string word1, string word2, vector<vector<int>> &dp)
  {
    if (i < 0)
      return j + 1;
    if (j < 0)
      return i + 1;
    if (dp[i][j] != -1)
      return dp[i][j];
    if (word1[i] == word2[j])
      return dp[i][j] = rec(i - 1, j - 1, word1, word2, dp);
    else
    {
      return dp[i][j] = 1 + min(
                                rec(i - 1, j, word1, word2, dp),         // Delete
                                min(rec(i, j - 1, word1, word2, dp),     // Insert
                                    rec(i - 1, j - 1, word1, word2, dp)) // Replace
                            );
    }
    return 0;
  }

  int minDistance(string S1, string S2)
  {
    // int m = word1.length();
    // int n = word2.length();
    // vector<vector<int>> dp(m, vector<int>(n, -1));
    // return rec(m - 1, n - 1, word1, word2, dp);
    int n = S1.size();
    int m = S2.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 0; i <= n; i++)
    {
      dp[i][0] = i;
    }
    for (int j = 0; j <= m; j++)
    {
      dp[0][j] = j;
    }

    for (int i = 1; i < n + 1; i++)
    {
      for (int j = 1; j < m + 1; j++)
      {
        if (S1[i - 1] == S2[j - 1])
          dp[i][j] = 0 + dp[i - 1][j - 1];

        else
          dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
      }
    }

    return dp[n][m];
  }
};