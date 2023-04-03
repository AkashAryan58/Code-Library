class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int i = 0, j = nums.size() - 1;
        int mid;
        if (nums.size() == 1)
            return 0;
        if (nums[nums.size() - 1] > nums[nums.size() - 2])
            return nums.size() - 1;

        if (nums[0] > nums[1])
            return 0;

        while (i < j)
        {
            mid = (i + j) / 2;
            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
                return mid;

            else if (nums[mid] > nums[mid + 1])
            {
                j = mid;
            }
            else
                i = mid;
        }
        return 1;
    }
};