class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0;
        vector<int>ans;
        if(nums.size()==1)
            return 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1])
            {
                int change=nums[i-1]-nums[i]+1;
                count+=change;
                nums[i]+=change;
            }
        }
        return count;
    }
};