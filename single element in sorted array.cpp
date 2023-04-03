
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0,j=nums.size(),mid;
        if(nums.size()==1)
            return nums[0];
        if(nums[0]!=nums[1])
            return nums[0];
        
        if(nums[nums.size()-1]!=nums[nums.size()-2])
            return nums[nums.size()-1];
        while(i<j)
        {
            mid=(i+j)/2;
             
            if(mid%2==0)
            {
                 if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
            {
              return nums[mid];   
            }
               if(nums[mid]==nums[mid-1])
               {
                   j=mid;
               }
                else if(nums[mid]==nums[mid+1])
                    i=mid;
            }
            
            else
            {
              if(nums[mid]==nums[mid-1])
               {
                   i=mid;
               }
              else if(nums[mid]==nums[mid+1])
                    j=mid;   
            }
        }
        return nums[mid];
    }
};