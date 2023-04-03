class Solution {
public:
    int longestCommonSubsequence(string str1, string str2) {
   int lcs[str1.length()+1][str2.length()+1];
   memset(lcs,0,sizeof(lcs));
   
   for(int i=1;i<=str1.length();i++)
   {
       for(int j=1;j<=str2.length();j++)
       {
           if(str1[i-1]==str2[j-1])
           {
               lcs[i][j]=1+lcs[i-1][j-1];
           }
           else{
               lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
           }
       }
   }

   return lcs[str1.length()][str2.length()];
    }
};