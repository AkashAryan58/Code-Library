class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int i = 0, j = height.size() - 1;
        int water, maxm = INT_MIN;
        while (i < j)
        {
            water = ((j - i) * min(height[i], height[j]));
            maxm = max(maxm, water);
            if (height[i] > height[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return maxm;
    }
};