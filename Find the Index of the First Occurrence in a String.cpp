class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int i, j;
        for (i = 0; i < haystack.length(); i++)
        {
            for (j = 0; j < needle.length(); j++)
            {
                if (needle[j] != haystack[j + i])
                    break;
            }
            if (j == needle.length())
                return i;
        }
        return -1;
    }
};