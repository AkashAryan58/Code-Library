class Solution
{
public:
    bool isPalindrome(int x)
    {

        int y;
        vector<int> vect;
        unordered_map<int, int> mp;
        if (x < 0)
            return false;
        while (x > 0)
        {
            y = x % 10;
            // cout<<y<<endl;
            vect.push_back(y);
            x = x / 10;
        }

        int i = 0, j = vect.size() - 1;
        while (i < j)
        {
            if (vect[i] != vect[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};