class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        ans.push_back(nums1[i]);
        for(int i=0;i<nums2.size();i++)
        ans.push_back(nums2[i]);
        sort(ans.begin(),ans.end());
        int a=ans.size();
        if(a%2==0)
        return double(ans[a/2]+ans[(a/2)-1])/2;
        //return double(ans[1]+ans[2])/2;
        else
        return ans[a/2];
    }
};