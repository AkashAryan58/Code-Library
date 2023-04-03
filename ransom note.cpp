class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int> mp,mp2;
        for(int i=0;i<magazine.length();i++)
        {
            mp[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++)
        {mp2[ransomNote[i]]++;
        }
        for(auto it:mp2)
        {
            if(mp.find(it.first)==mp.end())
            return false;
            else{
                if(it.second>mp[it.first])
                return false;
            }
        }
        return true;
    }
};