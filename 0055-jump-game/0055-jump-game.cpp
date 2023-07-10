class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int farthest = 0;
        
        for (int i = 0; i < n; i++) {
            if (i > farthest) {
                // Current position is unreachable
                return false;
            }
            
            farthest = max(farthest, i + nums[i]);
            
            if (farthest >= n - 1) {
                // Reached or exceeded the last index
                return true;
            }
        }
        
        return false;
    }
};
