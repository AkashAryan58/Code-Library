class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> x;
        x = nums1;
        x.insert(x.end(), nums2.begin(), nums2.end());
        sort(x.begin(), x.end());
        int l = x.size();
        if (l % 2 == 0)
        {
            float p = (x[(l / 2) - 1] + x[(l / 2)]) / 2.0;
            // cout<<x[(l/2)-1]<<"cdfhdgh"<<endl;
            return p;
        }
        else
        {
            double s = x[((l + 1) / 2) - 1];
            // cout<<s<<"..."<<l<<endl;
            return s;
        }
    }
};