class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0,j=0,sum=0,maxm=INT_MIN;
        while(j<nums.size())
        {
            sum=sum+nums[j];
            maxm=max(maxm,sum);
            if(sum<0)
            {
                sum=0;  
                j++;
                 i=j;
            }
            else{
                j++;
            }
        }
        return maxm;
    }
};