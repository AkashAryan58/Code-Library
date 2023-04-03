class Solution
{
public:
    int mySqrt(int x)
    {
        long long int num = 1, num2;

        while (num <= x)
        {
            num2 = num * num;
            if (num2 == x)
                return num;
            else if (num2 > x)
                return (num - 1);
            else if (num2 * num2 < x && num2 != 1)
            {
                num = num2;
                continue;
            }
            num++;
        }
        return 0;
    }
};