class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_set<int>ans;
        //vector<int>ans;
        for(auto i: arr)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            ans.insert(i.second);
            //ans.push_back(i.second);
        }
        return ans.size()==mp.size();
        
    }
};