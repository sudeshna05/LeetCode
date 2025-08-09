class Solution {
public:
    int sumof(int num){
        int d, s=0;
        while(num!=0)
        {
            d = num%10;
            s+=d;
            num /= 10;
        }
        return s;
    }
    int differenceOfSum(vector<int>& nums) {
        int esum =0, dsum=0;
        for(int i=0; i< nums.size(); i+=1){
            esum += nums[i];
            dsum += sumof(nums[i]);
        }

        return abs(esum-dsum);
    }
};