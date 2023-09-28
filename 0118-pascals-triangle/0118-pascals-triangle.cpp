class Solution {
public:
    vector<int>rownew(int r)
    {
        vector<int>ans;
        ans.push_back(1);
        int res=1;
        for(int i=1;i<r;i++)
        {
            res=res*(r-i);
            res=res/i;
            ans.push_back(res);
        }
        return ans;
        
    }
        
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        for(int i=1;i<=n;i++)
        {
            //vector<int>temp=rownew(i);
            ans.push_back(rownew(i));
        }
        return ans;
    }
};