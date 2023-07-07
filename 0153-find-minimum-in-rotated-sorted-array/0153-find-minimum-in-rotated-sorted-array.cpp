class Solution {
public:
    int findMin(vector<int>& nums) {
        int ele=*min_element(nums.begin(),nums.end());
        return ele;
    }
};