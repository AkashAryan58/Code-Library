class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int x = INT_MAX;
        int i = 0, j = 1, counter = 0;
        while (i < j && j < nums.size())
        {
            if (nums[i] == nums[j])
            {
                nums[j] = x;
                j++;
                continue;
            }
            i = j;
            j++;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == x)
                break;

            else
                counter++;
        }
        return counter;
    }
};