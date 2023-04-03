class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int> left,right,ans;
      int j=nums.size()-1,prod1=1,prod2=1;
      for(int i=0;i<nums.size();i++)
      {
          if(i==0){
              prod1=1;
          }
          else{
             prod1*=nums[i-1];
          }
        if(j==nums.size()-1)
        {
            prod2=1;
        }
        else{
           prod2*=nums[j+1];
        }
        
         j--;
         //cout<<prod1<<" n "<<prod2<<endl;
         left.push_back(prod1);
         right.push_back(prod2);
      }
      reverse(right.begin(),right.end());
       for(int i=0;i<nums.size();i++)
    {
        ans.push_back(left[i]*right[i]);
    }
    return ans;  
    }




  

};