class Solution
{
public:
    int dp[1001][1001];
    int unique(int a, int b, int m, int n)
    {
        if (a == m && b == n)
        {
            return 1;
        }
        if (a > m || b > n)
        {
            return 0;
        }
        if (dp[a][b] != -1)
        {
            return dp[a][b];
        }
        return dp[a][b] = unique(a + 1, b, m, n) + unique(a, b + 1, m, n);
    }
    int uniquePaths(int m, int n)
    {

        memset(dp, -1, sizeof(dp));
        return unique(1, 1, m, n);
    }
};