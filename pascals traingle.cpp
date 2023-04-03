class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        int a[100][100];
        vector<vector<int>> vect;
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                if (j == 0)
                {
                    a[i][j] = 1;
                }
                else if (j == i)
                {
                    a[i][j] = 1;
                }
                else
                {
                    a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
                }
                // cout<<a[i][j]<<" ";
            }
            // cout<<endl;
        }
        int counter = 1;
        vector<int> data;
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j < counter; j++)
            {
                data.push_back(a[i][j]);
            }
            vect.push_back(data);
            counter++;
            data.clear();
        }
        return vect;
    }
};