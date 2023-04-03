class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        unordered_map<char, int> mp, mpt;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        for (int i = 0; i < t.length(); i++)
        {
            mpt[t[i]]++;
        }
        for (auto it : mpt)
        {
            if (mp.find(it.first) == mp.end())
            {
                return it.first;
            }
            else
            {
                if (mp[it.first] != it.second)
                    return it.first;
            }
        }
        return 'x';
    }
};