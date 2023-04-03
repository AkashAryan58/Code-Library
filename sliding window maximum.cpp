class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        int i = 0, j = 0;
        priority_queue<pair<int, int>> pq;
        vector<int> ans;

        while (j < nums.size())
        {
            if (j - i + 1 < k)
            {
                pq.push({nums[j], j});
                j++;
                //  if(j-i+1==k)
                // ans.push_back(pq.top().first);
            }
            else
            {
                pq.push({nums[j], j});
                while (pq.empty() == false && pq.top().second <= j - k)
                    pq.pop();

                ans.push_back(pq.top().first);
                j++;
            }
        }
        return ans;
    }
};