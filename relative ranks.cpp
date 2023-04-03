class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        vector<string> vect;
        vector<pair<int, int>> vectt;
        pair<int, int> pairs;
        for (int i = 0; i < score.size(); i++)
        {
            pairs.first = score[i];
            pairs.second = i;
            vectt.push_back(pairs);
            vect.push_back("d");
        }
        sort(vectt.begin(), vectt.end());
        int counter = 0;
        ;
        for (int i = vectt.size() - 1; i >= 0; i--)
        {
            if (counter == 0)
            {
                vect[vectt[i].second] = "Gold Medal";
            }
            else if (counter == 1)
            {
                vect[vectt[i].second] = "Silver Medal";
            }
            else if (counter == 2)
            {
                vect[vectt[i].second] = "Bronze Medal";
            }
            else
            {
                vect[vectt[i].second] = to_string(counter + 1);
            }
            counter++;
        }

        return vect;
    }
};