class Solution {
public:
    int rob(vector<int>& nums) {
        int sum1=0,sum2=0;
        for(int i=0;i<nums.size();i++)
        {
            int temp=max(nums[i]+sum1,sum2);
            sum1=sum2;
            sum2=temp;
        }
        return sum2;
    }
};