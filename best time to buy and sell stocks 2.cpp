class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minsofar, maxm, profit = 0;
        minsofar = prices[0];
        for (int i = 0; i < prices.size() - 1; i++)
        {
            minsofar = min(minsofar, prices[i]);
            if (prices[i] > prices[i + 1] && prices[i] != minsofar)
            {
                maxm = prices[i];
                profit += (maxm - minsofar);
                minsofar = prices[i + 1];
            }
        }
        if (prices[prices.size() - 1] > minsofar)
        {
            profit += (prices[prices.size() - 1] - minsofar);
        }
        return profit;
    }
};