class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=*max_element(nums.begin(),nums.end());
        int b=0;
        for(int i=0;i<nums.size();i++)
        {
            while(b<=nums.size())
            {
                if(binary_search(nums.begin(),nums.end(),b)==1)
                b+=1;
                if(binary_search(nums.begin(),nums.end(),b)!=1)
                return b;
            }
        }
        return 0;
    }
};