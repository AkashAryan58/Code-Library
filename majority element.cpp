class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int counter=0;
        if(nums.size()==1)
        return nums[0];
        for(int i=0;i<nums.size();i++)
        {
            
             if(nums[i]==nums[i+1] )
               counter++;
               if(counter+1>nums.size()/2)
               {
                   return nums[i];
               }
            else if(nums[i]!=nums[i+1])
              {
               counter=0;
             }
            
           
        }
        return 0;
    }
};