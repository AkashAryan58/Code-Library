class Solution
{
public:
    int f(int ind, vector<int> &vect, vector<int> &dp)
    {
        if (ind == 0)
        {
            return vect[0];
        }
        if (ind < 0)
        {
            return 0;
        }
        if (dp[ind] != -1)
        {
            return dp[ind];
        }
        int pick = vect[ind] + f(ind - 2, vect, dp);
        int npick = f(ind - 1, vect, dp);
        return dp[ind] = max(pick, npick);
    }
    int rob(vector<int> &nums)
    {
        vector<int> dp(nums.size(), -1);
        return f(nums.size() - 1, nums, dp);
    }
};