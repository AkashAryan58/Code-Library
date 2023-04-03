class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        vector<int> ans;
        int k = 0, j = 0;
        int i = 0;
        int len;

        while (k < m && j < n)
        {
            // cout<<"hello"<<endl;

            if (nums1[k] <= nums2[j])
            {
                ans.push_back(nums1[k]);
                k++;
            }
            else if (nums1[k] > nums2[j])
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        if (k == m)
        {
            for (int i = j; i < n; i++)
            {
                ans.push_back(nums2[i]);
            }
        }
        else if (j == n)
        {
            for (int i = k; i < m; i++)
            {
                ans.push_back(nums1[i]);
            }
        }

        nums1.clear();
        for (int i = 0; i < ans.size(); i++)
        {
            nums1.push_back(ans[i]);
            // cout<<ans[i]<<" ";
        }
    }
};