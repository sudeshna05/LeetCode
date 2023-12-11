class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            if (it->second > (arr.size() / 4)) {
                return it->first;
            }
        }
        return 0;
    }
};