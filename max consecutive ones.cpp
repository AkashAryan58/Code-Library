class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int counter = 0, maxm = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                counter++;
            }
            else
            {
                counter = 0;
            }
            maxm = max(maxm, counter);
        }
        return maxm;
    }
};