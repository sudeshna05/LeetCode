class Solution {
public:
    int maxPower(string s) {
        int n=s.length();
        int c=0,maxi=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1])
            {
                 c++;
                maxi=max(maxi,c);
            }
                
            else
            {
                c=0;
            }
        }
        return maxi+1;
    }
};