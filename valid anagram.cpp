class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<char, int> map1, map2;
        if (t.length() != s.length())
            return false;

        for (int i = 0; i < s.length(); i++)
        {
            map1[s[i]]++;
        }
        for (int i = 0; i < t.length(); i++)
        {
            map2[t[i]]++;
        }

        for (int i = 0; i < t.length(); i++)
        {
            if (map1.find(t[i]) == map1.end())
                return false;

            else
            {
                if (map1[t[i]] != map2[t[i]])
                    return false;
            }
        }

        cout << "thdxf" << endl;
        return true;
    }
};