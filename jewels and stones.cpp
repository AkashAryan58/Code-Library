class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_map<char, int> map1, map2;
        int counter = 0;
        for (int i = 0; i < stones.length(); i++)
        {
            map1[stones[i]]++;
        }
        for (int i = 0; i < jewels.size(); i++)
        {
            if (map1.find(jewels[i]) != map1.end())
            {
                counter += map1[jewels[i]];
            }
        }
        return counter;
    }
};