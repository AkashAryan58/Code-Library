class Solution {
public:
    string reverseVowels(string s) {
        string vowel;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a' ||s[i]=='e' || s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                vowel.push_back(s[i]);
            }
        }
        reverse(vowel.begin(),vowel.end());
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            
            if(s[i]=='a' ||s[i]=='e' || s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                s[i]=vowel[c];
                c++;
            }
        }
        return s;
    }
};