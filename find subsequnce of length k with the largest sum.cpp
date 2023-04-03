class Solution
{
public:
    vector<int> maxSubsequence(vector<int> &nums, int k)
    {
        vector<int> vect, ans;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            vect.push_back(nums[i]);
        }
        sort(vect.begin(), vect.end());
        reverse(vect.begin(), vect.end());
        int counter = 0;
        for (int i = 0; i < k; i++)
        {
            mp[vect[i]]++;
        }

        for (int i = 0; i < nums.size(); i++)
        {

            if (mp.find(nums[i]) != mp.end())
            {
                counter++;
                ans.push_back(nums[i]);
                if (mp[nums[i]] == 1)
                    mp.erase(nums[i]);
                else
                    mp[nums[i]]--;
            }

            if (counter == k)
                break;
        }

        return ans;
    }
};