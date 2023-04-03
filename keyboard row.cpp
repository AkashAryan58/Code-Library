class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {
        unordered_set<char> s1, s2, s3;
        string S1 = "asdfghjklASDFGHJKL";
        string S2 = "qwertyuiopQWERTYUIOP";
        string S3 = "zxcvbnmZXCVBNM";
        vector<string> str;
        for (int i = 0; i < S1.length(); i++)
        {
            s1.insert(S1[i]);
        }

        for (int i = 0; i < S2.length(); i++)
        {
            s2.insert(S2[i]);
        }

        for (int i = 0; i < S3.length(); i++)
        {
            s3.insert(S3[i]);
        }
        int m = 0, l = 0, k = 0, flag = 0;
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words[i].length(); j++)
            {
                if (s1.find(words[i][j]) != s1.end())
                {
                    m++;
                }
                if (s2.find(words[i][j]) != s2.end())
                {
                    l++;
                }
                if (s3.find(words[i][j]) != s3.end())
                {
                    k++;
                }
                if (m > 0 && l > 0 || m > 0 && k > 0 || l > 0 && k > 0)
                    flag++;
            }
            if (flag == 0)
            {
                str.push_back(words[i]);
            }
            m = 0;
            l = 0;
            k = 0;
            flag = 0;
        }

        return str;
    }
};