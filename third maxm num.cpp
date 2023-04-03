class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        if (nums.size() < 3)
        {
            return nums[nums.size() - 1];
        }
        else
        {
            unordered_map<int, int> mp;
            for (int i = nums.size() - 1; i >= 0; i--)
            {
                mp[nums[i]]++;
                if (mp.size() >= 3)
                {
                    return nums[i];
                }
                else if (i == 0)
                {
                    if (mp.size() < 3)
                    {
                        return nums[nums.size() - 1];
                    }
                }
            }
        }
        return 0;
    }
};