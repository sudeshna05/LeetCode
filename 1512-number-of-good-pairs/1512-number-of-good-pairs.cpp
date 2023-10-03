class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size(),c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(i<j && nums[i]==nums[j])
                    c++;
            }
        }
        return c;
    }
};