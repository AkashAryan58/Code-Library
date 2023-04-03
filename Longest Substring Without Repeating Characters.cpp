class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int i = 0, j = 0, len = INT_MIN;
        unordered_map<char, int> mp;
        if (s.length() == 0)
            return 0;
        while (j < s.length())
        {
            mp[s[j]]++;
            if (mp.size() == j - i + 1)
            {
                len = max(len, (j - i + 1));
                j++;
            }
            else if (mp.size() < (j - i + 1))
            {
                mp.erase(s[i]);
                i++;
            }
        }
        return len;
    }
};