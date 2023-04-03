class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int low, high, mid;
        low = 0;
        high = nums.size() - 1;
        // cout<<high<<endl;

        while (low <= high)
        {
            mid = (low + high) / 2;

            if (nums[mid] == target)
                return mid;

            else if (nums[mid] > target)
            {
                high = mid - 1;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
        }
        // cout<<mid<<endl;
        if (nums[mid] > target)
            return mid;

        else
            return mid + 1;
    }
};