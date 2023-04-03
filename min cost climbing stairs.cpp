class Solution
{
public:
    int data[10004];
    int cos(int n, vector<int> &cost)
    {
        if (n >= cost.size())
            return 0;

        if (data[n] != -1)
            return data[n];

        data[n] = cost[n] + min(cos(n + 1, cost), cos(n + 2, cost));
        //  if(data((cost.size()-1-n)))
        // return data((cost.size()-1-n));

        return data[n];
    }
    int minCostClimbingStairs(vector<int> &cost)
    {
        memset(data, -1, sizeof(data));
        return min(cos(0, cost), cos(1, cost));
    }
};