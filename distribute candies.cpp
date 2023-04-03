class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        // unordered_map<int,int> mp;
        for (int i = 0; i < candyType.size(); i++)
        {
            mp[candyType[i]]++;
        }
        if (mp.size() > candyType.size() / 2)
        {
            return candyType.size() / 2;
        }
        return mp.size();
    }
};