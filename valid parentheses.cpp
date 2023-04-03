class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        st.push('s');
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '[' || s[i] == '{' || s[i] == '(')
                st.push(s[i]);

            else if (s[i] == ']' || s[i] == '}' || s[i] == ')')
            {
                if (st.top() == '[' && s[i] == ']')
                    st.pop();
                else if (st.top() == '{' && s[i] == '}')
                {
                    st.pop();
                }
                else if (st.top() == '(' && s[i] == ')')
                {
                    st.pop();
                }
                else
                    return false;
            }
        }
        if (st.top() != 's')
            return false;

        return true;
    }
};