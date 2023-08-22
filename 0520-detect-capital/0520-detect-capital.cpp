class Solution {
public:
    bool detectCapitalUse(string s) {
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(65<=int(s[i]) && int(s[i])<=90)
                count++;
        }
        if(count==s.length() || count==0 || (count==1 && (65<=int(s[0]) && int(s[0])<=90)))
            return 1;
        else
            return 0;
    }
};