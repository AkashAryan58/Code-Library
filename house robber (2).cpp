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
        if (nums.size() == 1)
        {
            return nums[0];
        }
        vector<int> dp1(nums.size(), -1), dp2(nums.size(), -1);
        vector<int> vect1, vect2;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            vect1.push_back(nums[i]);
        }
        for (int i = 1; i < nums.size(); i++)
        {
            vect2.push_back(nums[i]);
        }
        int a = f(vect1.size() - 1, vect1, dp1);
        int b = f(vect2.size() - 1, vect2, dp2);
        return max(a, b);
    }
};