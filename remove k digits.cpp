class Solution
{
public:
    string removeKdigits(string num, int k)
    {

        string s = num;
        int digit = k;

        stack<int> stk;
        stk.push(int(s[0]));
        for (int i = 1; i < s.length(); i++)
        {
            while (!stk.empty() && digit > 0 && stk.top() > int(s[i]))
            {
                stk.pop();
                digit--;
                continue;
            }
            stk.push(int(s[i]));
        }

        if (digit != 0)
        {
            while (digit != 0)
            {
                digit--;
                stk.pop();
            }
        }
        string ans;
        while (!stk.empty())
        {

            ans.push_back(char(stk.top()));
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        // return ans;
        string aa;
        int flag = 0;
        for (int i = 0; i < ans.length(); i++)
        {
            if (int(ans[i]) > int('0'))
            {
                flag = i;
                break;
            }
        }
        for (int i = flag; i < ans.length(); i++)
        {
            aa.push_back(ans[i]);
        }
        if (aa[0] == '0' || aa.length() == 0)
        {
            return ans = "0";
        }
        else
            return aa;
    }
};