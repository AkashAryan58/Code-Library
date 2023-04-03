class Solution {
public:
    int unique(vector<vector<int>>& obs,vector<vector<int>>& dp,int i,int j)
    {
        if(i>obs.size()-1 || j>obs[0].size()-1 || obs[i][j]==1)
        {
            return 0;
        }
        if(i==obs.size()-1 && j==obs[0].size()-1){
            return 1;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int right=unique(obs,dp,i,j+1);
        int down=unique(obs,dp,i+1,j);
        return dp[i][j]=right+down;
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obs) {
        vector<vector<int>> dp(101, vector<int>(101,-1));
        return unique(obs,dp,0,0);
    }
};