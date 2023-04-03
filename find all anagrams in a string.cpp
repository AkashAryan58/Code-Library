class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        unordered_map<char, int> mp, mp2;
        vector<int> vect;
        int flag = 0;
        for (int i = 0; i < p.length(); i++)
        {
            mp[p[i]]++;
        }
        int i = 0, j = 0;
        while (j < s.length())
        {
            mp2[s[j]]++;
            if (j - i + 1 < p.length())
            {
                j++;
            }
            else if (j - i + 1 == p.length())
            {
                for (auto it : mp)
                {
                    if (mp2.find(it.first) != mp.end())
                    {
                        if (mp2[it.first] != it.second)
                        {
                            flag = 1;
                        }
                    }
                    else
                    {
                        flag = 1;
                    }
                }
                if (flag == 0)
                {
                    vect.push_back(i);
                }
                if (flag == 1)
                    flag = 0;

                //  mp2[s[j]]++;
                j++;
                if (mp2[s[i]] > 1)
                    mp2[s[i]]--;
                else
                    mp2.erase(s[i]);
                i++;
            }
        }

        return vect;
    }
};