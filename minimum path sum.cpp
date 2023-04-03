class Solution
{
public:
    int minpath(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
    {
        // cout<<i<<" "<<j<<endl;
        if (i == 0 && j == 0)
        {
            return grid[0][0];
        }
        if (i < 0 || j < 0)
        {
            return 100000;
        }
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int up = grid[i][j] + minpath(i - 1, j, grid, dp);
        int left = grid[i][j] + minpath(i, j - 1, grid, dp);

        return dp[i][j] = min(up, left);
    }
    int minPathSum(vector<vector<int>> &grid)
    {
        vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), -1));
        return minpath(grid.size() - 1, grid[0].size() - 1, grid, dp);
    }
};