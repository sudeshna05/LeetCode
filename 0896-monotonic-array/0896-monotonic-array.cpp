class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int count=0,c=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>=nums[i+1]) 
                count++;
            if(nums[i]<=nums[i+1])
                c++;
        }
        if((count==nums.size()-1)|| c==nums.size()-1)
            return 1;
        else
            return 0;
           
    }
};