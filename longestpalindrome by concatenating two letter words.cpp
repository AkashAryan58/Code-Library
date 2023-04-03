class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        string s,r;
        int counter=0;
        unordered_map<string,int> mp;
        mp[words[0]]++;
        s=words[0];
      // reverse(s.begin(),s.end());
        // cout<<s<<" hkhk";
        for(int i=1;i<words.size();i++)
        {
            s=words[i];
            reverse(s.begin(),s.end());
        
            
                if(mp.find(s)!=mp.end())
                {
                    counter++;
                    if(mp[s]>1)
                    mp[s]--;
                    else
                    mp.erase(s);
                }
                else
                {
                    reverse(s.begin(),s.end());
                    mp[s]++;

                }
        
           // cout<<s<<endl;
            s.clear();
        }
        counter=counter*4;
        int c=0;
        for(auto it:mp)
        {
            //cout<<it.first<<" "<<it.second<<endl;
            s=it.first;
           if(s[0]==s[1])
           {
             c=2*it.second;
           }
        }
        counter=c+counter;
        
        return counter;
    }
};