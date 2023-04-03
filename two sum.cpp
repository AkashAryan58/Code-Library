class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        vector<int> b;
        int x;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                x = nums[i] + nums[j];
                if (x == target)
                {
                    vector<int> a{i, j};
                    return a;
                }
            }
        }
        return b;
    }
};