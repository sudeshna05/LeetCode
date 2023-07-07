class Solution {
    int countOnes(int num) {
        int count = 0;
        while (num > 0) {
            count += num & 1;  // Check if the least significant bit is set
            num >>= 1;        // Right shift to process the next bit
        }
        return count;
    }

public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);
        for (int i = 0; i <= n; i++) {
            ans[i] = countOnes(i);
        }
        return ans;
    }
};
/*
class Solution {
    int count(int n) {
        int c = 0;
        while (n != 0) {
            c += n % 2;
            n >>= 1;
        }
        return c;
    }

public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);
        for (int i = 0; i <= n; i++) {
            ans[i] = count(i);
        }
        return ans;
    }
};
*/