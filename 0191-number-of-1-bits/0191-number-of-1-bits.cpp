class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n != 0){
            count += (n%2);// when we divide by 2, if we have a '0' in the units place, we get remaider 0 but if we have '1', our remainder will ve 1 and we will right shift this everytime.
            n >>= 1;
        }
        return count;
    }
};