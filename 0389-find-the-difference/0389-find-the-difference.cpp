class Solution {
public:
    char findTheDifference(string s, string t) {
       char ans=0;
        for(char c:t)
        {
            ans+=c;
        }
        for(char c:s)
        {
            ans-=c;
        }
        return ans;
    }
};