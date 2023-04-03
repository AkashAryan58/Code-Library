class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int prefix[nums.size()];
        prefix[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        int suffix[nums.size()];
        suffix[nums.size() - 1] = nums[nums.size() - 1];
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            suffix[i] = suffix[i + 1] + nums[i];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (prefix[i] == suffix[i])
            {
                return i;
            }
        }
        return - 1;
            
    }
};