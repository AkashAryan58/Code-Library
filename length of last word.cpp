class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter=0;
        int flag;
         for(int i=s.length()-1;i>=0;i--)
         {
             if(isalpha(s[i]))
             {
                 flag=1;
             }
             else{
                 flag=2;
             }
             if(flag==1)
             {
                 counter++;
             }

             if(flag==2 && counter!=0)
             break;
         }
         return counter;
    }
};