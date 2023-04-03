class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        vector<int> vect;
        vect.push_back(1);
        vect.push_back(1);
        for (int i = 2; i <= n; i++)
        {
            vect.push_back(vect[i - 1] + vect[i - 2]);
        }

        return vect[n];
    }
};