class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0, minsofar = INT_MAX, maxprofit = INT_MIN;
        for (int i = 0; i < prices.size(); i++)
        {
            minsofar = min(minsofar, prices[i]);
            profit = max(profit, prices[i] - minsofar);
        }
        return profit;
    }
};