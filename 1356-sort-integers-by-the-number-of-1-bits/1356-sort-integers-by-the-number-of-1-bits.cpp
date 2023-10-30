#include <vector>
#include <algorithm>

class Solution {
public:
    // Function to count the number of set bits in an integer
    int countSetBits(int num) {
        int count = 0;
        while (num > 0) {
            count += num & 1;
            num >>= 1;
        }
        return count;
    }

    vector<int> sortByBits(vector<int>& arr) {
        // Sort the vector based on the number of set bits
        std::sort(arr.begin(), arr.end(), [this](int a, int b) {
            int countA = countSetBits(a);
            int countB = countSetBits(b);
            return countA == countB ? a < b : countA < countB;
        });

        return arr;
    }
};
