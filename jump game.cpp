class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int maxreach = nums[0];
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (i > maxreach)
                return false;

            maxreach = max(maxreach, i + nums[i]);
        }
        if (maxreach >= nums.size() - 1)
            return true;

        return false;
    }
};