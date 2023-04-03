// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int t = 1;
        for (int i = n; i >= 1; i = i / 2)
        {
            if (isBadVersion(i) == false)
            {
                t = i;
                break;
            }
        }
        for (int i = t; i <= n; i++)
        {
            if (isBadVersion(i) == true)
                return i;
        }
        return 0;
    }
};