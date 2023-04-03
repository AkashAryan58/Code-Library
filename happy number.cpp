class Solution
{
public:
    bool isHappy(int n)
    {
        vector<int> vect;
        unordered_map<int, int> mp;
        if (n / 10 == 0 && n == 1)
            return true;
        while (true)
        {
            while (n != 0)
            {
                int data = n % 10;
                vect.push_back(data);
                n = n / 10;
            }
            int sqsum = 0;
            for (int i = 0; i < vect.size(); i++)
            {
                sqsum += vect[i] * vect[i];
            }
            n = sqsum;
            mp[n]++;
            if (n == 1)
            {
                return true;
            }
            if (mp[n] > 1)
                return false;

            vect.clear();
        }
    }
};