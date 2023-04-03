class Solution
{
public:
    int minm(int i, int j, vector<vector<int>> &tr, vector<vector<int>> &dp)
    {
        // cout<<i<<" "<<j<<endl;
        if (i >= tr.size() || j >= tr[i].size())
        {
            return 1000000;
        }
        if (i == tr.size() - 1)
        {
            return tr[i][j];
        }
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int doo = tr[i][j] + minm(i + 1, j, tr, dp);
        int di = tr[i][j] + minm(i + 1, j + 1, tr, dp);
        return dp[i][j] = min(di, doo);
    }
    int minimumTotal(vector<vector<int>> &triangle)
    {
        vector<vector<int>> dp(1000, vector<int>(1000, -1));
        return minm(0, 0, triangle, dp);
    }
};