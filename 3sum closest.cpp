class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int lo ,hi;
        int sum;
        int diff=INT_MAX,ans;
        sort(nums.begin(),nums.end());

      for(int i=0;i<nums.size();i++)
      {
        lo=i+1;
        hi=nums.size()-1;
      while(lo<hi)
      {
          sum=nums[lo]+nums[hi]+nums[i];
          if(sum<target)
          {
              if(abs(sum-target)<diff)
              {  diff=abs(sum-target);
              ans=sum;
              }
            

              lo++;
          }
          else if(sum>target)
          {
              
              if(abs(sum-target)<diff)
              {
 diff=abs(sum-target);
 ans=sum;

              }
             
              hi--;
          }
          else if(sum==target)
          return target;

      }
      }
      return ans;
    }
};