#include<bits/stdc++.h>
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        //int n=nums.size();
        sort(nums.begin(),nums.end());
       /* vector<int>::iterator it;
        it = unique(nums.begin(), nums.end());
        nums.resize(distance(nums.begin(), it));
        vector<int>ans;
        for(it = nums.begin(); it != nums.end(); ++it)
        {
            ans.push_back(*it);
        }
        sort(ans.begin(),ans.end());
        if(n<3)
        return *max_element(nums.begin(),nums.end());
        else
        {
        return ans[ans.size()-3];
        }*/
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        reverse(nums.begin(),nums.end());
        if(nums.size()<3) 
        return nums[0];
        //else
        return nums[2];
    }
};