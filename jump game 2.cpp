class Solution {
public:

    int jump1(int k,vector<int>& nums,vector<int>& dp)
    {
      if(k==nums.size()-1)
      {
          return 1;
      }
      if(k>nums.size())
      {
          return 10000;
      }
      if(dp[k]!=-1)
      {
          return dp[k];
      }
      int minm=1000000;
      int reach;
      if(k+nums[k]>nums.size()-1)
      {
          reach=nums.size()-1;
      }
      else{
          reach=k+nums[k];
      }
      int counter=1;
      for(int i=k+1;i<=reach;i++)
      {

          minm=min(jump1(k+counter,nums,dp),minm);
         //  cout<<jump1(k+i,nums)<<endl;
           counter++;
      }
     
      return dp[k]=1+ minm;

    }
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        //memset(dp,-1,sizeof(dp));
        return jump1(0,nums,dp)-1;
    }
};