class Solution
{
public:
    bool poww(int x)
    {
        if (x == 1)
            return true;
        if (x % 3 != 0 || x == 0)
            return false;
        else
            return poww(x / 3);
    }
    bool isPowerOfThree(int n)
    {

        return poww(n);
    }
};