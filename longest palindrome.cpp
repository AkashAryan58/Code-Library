class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> map;
        int flag=0;
        for(int i=0;i<s.length();i++)
        {
            map[s[i]]++;
        }
        int counter=0,x;
        for(auto it:map)
        {
            if(it.second>1)
            {
                if(it.second%2==0)
                counter+=it.second;

                else
                {
                   counter+=it.second-1;
                   flag=1;
                }
                

            }
            else
            flag=1;
        }
        if(flag==1)
        return counter+1;
        else 
        return counter;
       
    }
};