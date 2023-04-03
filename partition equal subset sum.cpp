class Solution
{
public:
    bool subset(vector<int> nums, int i, int k, vector<vector<int>> &dp)
    {
        if (k == 0)
        {
            return true;
        }
        if (i == nums.size() - 1)
            return nums[i] == k;

        if (dp[i][k] != -1)
            return dp[i][k];

        bool select = false;

        bool notselect = subset(nums, i + 1, k, dp);
        if (k >= nums[i])
            select = subset(nums, i + 1, k - nums[i], dp);
        return dp[i][k] = (select || notselect);
    }
    bool canPartition(vector<int> &nums)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
            sum += nums[i];

        if (sum % 2 == 1)
        {
            return false;
        }
        vector<vector<int>> dp(nums.size(), vector<int>((sum / 2) + 1, -1));
        return subset(nums, 0, (sum / 2), dp);
    }
};