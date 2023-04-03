class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int counter = 0, flag = 0;

        for (int i = 0; i < word.length(); i++)
        {
            if (i == 0 && isupper(word[i]))
            {
                flag = 1;
                counter++;
            }
            else if (flag == 1)
            {
                if (isupper(word[i]))
                    counter++;
            }
            else if (flag == 0 && isupper(word[i]))
                return false;
        }
        if (word.length() == counter)
            return true;

        else if (counter == 1 && flag == 1)
            return true;

        else if (flag == 0 && counter == 0)
            return true;

        return false;
    }
};