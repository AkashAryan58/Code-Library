class Solution
{
public:
    int dp[51][51][51];
    int cherry(int i1, int j1, int i2, vector<vector<int>> &grid)
    {
        int j2 = i1 + j1 - i2;
        if (i1 > grid.size() - 1 || i2 > grid.size() - 1 || j1 > grid.size() - 1 || j2 > grid.size() - 1 || grid[i1][j1] == -1 || grid[i2][j2] == -1)
        {
            return -1000000;
        }
        if (i1 == grid.size() - 1 && j1 == grid.size() - 1)
        {
            return grid[i1][j1];
        }
        int cherries = 0;
        if (i1 == i2 && j1 == j2)
        {
            cherries += grid[i1][j1];
        }
        else
        {
            cherries += grid[i1][j1] + grid[i2][j2];
        }
        if (dp[i1][j1][i2] != -1)
        {
            return dp[i1][j1][i2];
        }
        int f1 = cherry(i1 + 1, j1, i2 + 1, grid);
        int f2 = cherry(i1 + 1, j1, i2, grid);
        int f3 = cherry(i1, j1 + 1, i2, grid);
        int f4 = cherry(i1, j1 + 1, i2 + 1, grid);
        int maxm = max(max(f1, f2), max(f3, f4));
        return dp[i1][j1][i2] = maxm + cherries;
    }
    int cherryPickup(vector<vector<int>> &grid)
    {

        memset(dp, -1, sizeof(dp));
        if (cherry(0, 0, 0, grid) < -100000)
            return 0;
        else
            return cherry(0, 0, 0, grid);
    }
};