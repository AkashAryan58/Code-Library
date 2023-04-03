class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            if(matrix[i][0]<=target &&matrix[i][matrix[i].size()-1]>=target)
            {
                for(int j=0;j<n;j++)
                {
                    if(matrix[i][j]==target)
                        return true;
                }
            }
        }
        return false;
    }
};