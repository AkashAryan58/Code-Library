class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> map, m1, m2;
        for (int i = 0; i < s.length(); i++)
        {
            m1[s[i]]++;
            m2[t[i]]++;
        }
        if (m1.size() != m2.size())
            return false;

        for (int i = 0; i < s.length(); i++)
        {
            if (map.find(s[i]) == map.end())
            {
                map[s[i]] = t[i];
            }
            else
            {
                if (map[s[i]] != t[i])
                    return false;
            }
        }
        return true;
    }
};