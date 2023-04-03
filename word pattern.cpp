class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        unordered_map<char, string> data;
        unordered_map<string, char> data2;
        string word;
        vector<string> str;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
            {
                word.push_back(s[i]);
            }
            else
            {
                str.push_back(word);
                word.clear();
            }
        }
        str.push_back(word);
        if (str.size() != pattern.length())
            return false;
        word.clear();
        for (int i = 0; i < str.size(); i++)
        {
            if (data.find(pattern[i]) != data.end())
            {
                if (data[pattern[i]] != str[i])
                    return false;
            }
            else
            {
                data[pattern[i]] = str[i];
                // cout<<s[i]<<" "<<str[i]<<endl;
            }
        }
        for (int i = 0; i < str.size(); i++)
        {
            if (data2.find(str[i]) != data2.end())
            {
                if (data2[str[i]] != pattern[i])
                    return false;
            }
            else
            {
                data2[str[i]] = pattern[i];
                // cout<<s[i]<<" "<<str[i]<<endl;
            }
        }
        return true;
    }
};