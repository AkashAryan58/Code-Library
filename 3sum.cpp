class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        vector<vector<int>> vect;
        vector<int> arr;
        sort(nums.begin(), nums.end());
        int flag = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int lo, hi;
            lo = i + 1;
            hi = nums.size() - 1;
            while (lo < hi)
            {
                int currsum = nums[i] + nums[lo] + nums[hi];
                if (currsum == 0)
                {
                    arr.push_back(nums[i]);

                    arr.push_back(nums[lo]);

                    arr.push_back(nums[hi]);
                    for (int g = 0; g < vect.size(); g++)
                    {
                        if (vect[g][0] == arr[0] && vect[g][1] == arr[1] && vect[g][2] == arr[2])
                        {
                            flag = 1;
                        }
                    }
                    if (flag == 0)
                        vect.push_back(arr);
                    else
                        flag = 0;

                    arr.clear();
                    lo++;
                }

                else if (currsum > 0)
                    hi--;
                else if (currsum < 0)
                    lo++;
            }
        }
        return vect;
    }
};