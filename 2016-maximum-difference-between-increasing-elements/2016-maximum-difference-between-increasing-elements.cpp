class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]<nums[j])
                {
                    res=max(res,nums[j]-nums[i]);
                }
            }
        }
        if(res>0)
        return res;
        else
            return -1;
    }
};