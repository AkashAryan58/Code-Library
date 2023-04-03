class Solution
{
public:
    int findTargetSumWays(vector<int> &nums, int target)
    {

        int summ = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            summ = summ + nums[i];
        }
        int req = (target + summ) / 2;
        int d = target + summ;
        if (d % 2 == 1 || d < 0)
            return 0;

        int t[nums.size() + 1][req + 1];
        for (int i = 0; i < nums.size() + 1; i++)
            for (int j = 0; j < req + 1; j++)
            {
                if (i == 0)
                    t[i][j] = 0;
                if (j == 0)
                    t[i][j] = 1;
            }

        for (int i = 1; i < nums.size() + 1; i++)
            for (int j = 0; j < req + 1; j++)
            {
                if (nums[i - 1] <= j)
                    t[i][j] = t[i - 1][j - nums[i - 1]] + t[i - 1][j];
                else
                {
                    t[i][j] = t[i - 1][j];
                }
            }
        return t[nums.size()][req];
    }
};