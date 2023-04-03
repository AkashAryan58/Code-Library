class Solution
{
public:
    int reverse(int x)
    {
        string s, rev;
        int z = x, cc = 0, zz;
        while (z != 0)
        {
            if (cc == 0)
                zz = x % 10;

            z = z / 10;
            cc++;
        }
        cout << cc << " " << zz << endl;
        if (cc == 10)
        {
            if (abs(zz) > 2)
                return 0;
        }
        int flag = 0;
        if (x < 0)
        {
            flag = 1;
            if ((x * -1) > pow(2, 31))
                return 0;
            x = x * -1;
        }
        long long int t = x, p, a = 0, b;
        while (t != 0)
        {
            p = t % 10;
            //  cout<<char(p+'0')<<endl;
            s.push_back(char(p + '0'));
            t = t / 10;
            if (a * 10 > pow(2, 31))
                return 0;
            a = a * 10;
            a = a + p;
        }
        if (flag == 1)
            a = a * -1;
        // cout<<s<<endl;
        // t=stoi(s);
        // cout<<t<<"    n kmnkk  "<<endl;
        return a;
    }
};