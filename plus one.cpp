class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
          
          if(digits[digits.size()-1]<9 && digits.size()>1)
          {
              digits[digits.size()-1]+=1;
              return digits;
          }
          int flag=-1;
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]!=9)
            {
                flag=i;
                break;
            }
        } 
        if(flag==-1)
        {
            digits.push_back(0);
            for(int i=0;i<digits.size();i++)
            {
                if(i==0)
                digits[i]=1;
                else 
                digits[i]=0;
            }
            return digits;
        }
        else{
            for(int i=flag;i<digits.size();i++)
            {
                if(i==flag)
                {
                    digits[flag]+=1;
                }
                else
                digits[i]=0;
            }
        }
        return digits;
    }
};