class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        int i = 0, j = 0, flag = 0;
        unordered_map<char, int> mp1, mp2;
        if (s1.length() > s2.length())
            return false;

        else
        {

            while (j <= s2.length())
            {

                // cout<<s2[j]<<endl;
                if (j - i + 1 <= s1.length())
                {
                    cout << s1[j] << " " << s2[j] << endl;
                    mp1[s1[j]]++;
                    mp2[s2[j]]++;
                    j++;
                }
                else if (j - i + 1 > s1.length())
                {
                    if (mp1.size() == mp2.size())
                    {
                        // cout<<"hi"<<endl;
                        for (auto it : mp1)
                        {

                            if (mp2.find(it.first) == mp2.end())
                            {
                                flag = 1;
                            }
                            else
                            {
                                if (mp2[it.first] != it.second)
                                    flag = 1;
                            }

                            //  cout<<flag<<endl;
                        }
                        if (flag == 0)
                            return true;
                    }
                    flag = 0;

                    if (mp2[s2[i]] > 1)
                    {
                        mp2[s2[i]]--;
                    }
                    else
                    {
                        mp2.erase(s2[i]);
                    }
                    mp2[s2[j]]++;
                    cout << s2[j] << endl;
                    i++;
                    j++;
                }
            }
        }

        return false;
    }
};