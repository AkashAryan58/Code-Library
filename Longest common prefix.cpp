class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string s, t;
        int flag = 0;
        int min = INT_MAX;
        for (int i = 0; i < strs.size(); i++)
        {
            if (min > strs[i].length())
                min = strs[i].length();
        }
        cout << min << endl;
        for (int j = 0; j < min; j++)
        {
            s.push_back(strs[0][j]);
            cout << s << "   ss" << endl;
            for (int i = 1; i < strs.size(); i++)
            {
                t = strs[i].substr(0, j + 1);
                cout << t << "   tt" << endl;
                // t=t[:j];
                if (t != s)
                {
                    flag = 1;
                }
            }
            if (flag == 1)
            {
                s = s.substr(0, s.length() - 1);
                return s;
            }
        }
        return s;
    }
};