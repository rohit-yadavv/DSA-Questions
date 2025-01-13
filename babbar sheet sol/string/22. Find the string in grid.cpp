//? https://www.geeksforgeeks.org/problems/find-the-string-in-grid0111/1

vector<vector<int>> searchWord(vector<vector<char>> &grid, string word)
{
  vector<vector<int>> ans;
  int rows = grid.size();
  int cols = grid[0].size();

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (grid[i][j] == word[0])
      {
        for (int k1 = -1; k1 <= 1; k1++)
        {
          for (int k2 = -1; k2 <= 1; k2++)
          {
            if (k1 == 0 && k2 == 0)
            {
              continue;
            }

            int tempi = i + k1;
            int tempj = j + k2;
            int l;
            for (l = 1; l < word.size(); l++)
            {
              if (tempi >= 0 && tempi < rows && tempj >= 0 && tempj < cols && grid[tempi][tempj] == word[l])
              {
                tempi += k1;
                tempj += k2;
              }
              else
              {
                break;
              }
            }
            if (l == word.size())
            {
              bool found = false;
              for (const auto &pos : ans)
              {
                if (pos[0] == i && pos[1] == j)
                {
                  found = true;
                  break;
                }
              }
              if (!found)
              {
                ans.push_back({i, j});
              }
            }
          }
        }
      }
    }
  }
  sort(ans.begin(), ans.end());
  return ans;
}
