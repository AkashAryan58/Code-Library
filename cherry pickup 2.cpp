class Solution
{
public:
    int cherry(int i, int j1, int j2, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp)
    {
        if (i > grid.size() - 1 || j1 > grid[0].size() - 1 || j2 > grid[0].size() - 1 || j1 < 0 || j2 < 0)
        {
            return -1000000;
        }

        if (i == grid.size() - 1)
        {
            if (j1 != j2)
            {
                return grid[i][j1] + grid[i][j2];
            }
            else
            {
                return grid[i][j1];
            }
        }
        int che = 0;
        if (j1 != j2)
        {
            che = grid[i][j1] + grid[i][j2];
        }
        else
        {
            che = grid[i][j1];
        }
        if (dp[i][j1][j2] != -1)
        {
            return dp[i][j1][j2];
        }

        int f1 = cherry(i + 1, j1, j2, grid, dp);
        int f2 = cherry(i + 1, j1, j2 - 1, grid, dp);
        int f3 = cherry(i + 1, j1, j2 + 1, grid, dp);
        int f4 = cherry(i + 1, j1 - 1, j2, grid, dp);
        int f5 = cherry(i + 1, j1 - 1, j2 + 1, grid, dp);
        int f6 = cherry(i + 1, j1 - 1, j2 - 1, grid, dp);
        int f7 = cherry(i + 1, j1 + 1, j2, grid, dp);
        int f8 = cherry(i + 1, j1 + 1, j2 + 1, grid, dp);
        int f9 = cherry(i + 1, j1 + 1, j2 - 1, grid, dp);
        che += max({f1, f2, f3, f4, f5, f6, f7, f8, f9});

        return dp[i][j1][j2] = che;
    }
    int cherryPickup(vector<vector<int>> &grid)
    {
        vector<vector<vector<int>>> dp(grid.size(), vector<vector<int>>(grid[0].size(), vector<int>(grid[0].size(), -1)));

        return cherry(0, 0, grid[0].size() - 1, grid, dp);
    }
};