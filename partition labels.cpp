class Solution {
public:
    vector<int> partitionLabels(string s) {
       unordered_map<char,int>map1,map2;
       vector<int> vect;
       int maxm=INT_MIN;
       for(int i=0;i<s.length();i++)
       {
           map1[s[i]]=i;
       } 
       
    //    for(auto it:map1)
    //    {
    //        cout<<it.first<<" "<<it.second<<endl;
    //    }
       int prev=0;
       for(int i=0;i<s.length();i++)
       {
           maxm=max(maxm,map1[s[i]]);
           if(i>=maxm)
           {
               vect.push_back(i-prev+1);
               prev=maxm+1;
           }
       }
       return vect;
    }
};