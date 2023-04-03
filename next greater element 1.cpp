class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> mp;
        vector<int> vect;
        int flag = 0, j;
        for (int i = 0; i < nums2.size(); i++)
        {
            mp[nums2[i]] = i;
        }
        for (int i = 0; i < nums1.size(); i++)
        {
            for (j = mp[nums1[i]] + 1; j < nums2.size(); j++)
            {
                if (nums1[i] < nums2[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                vect.push_back(nums2[j]);
            }
            else
            {
                vect.push_back(-1);
            }
            flag = 0;
        }
        return vect;
    }
};