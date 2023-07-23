/*class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int c=0;
        for(int i=0;i<time.size();i++)
        {
            for(int j=1;j<time.size();j++)
            {
                if(i<j){
                if((time[i]+time[j])%60==0)
                    c++;
                }
            }
        }
        return c;
    }
};*/
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int c = 0;
        vector<int> remainderFreq(60, 0);
        
        for (int t : time) {
            int remainder = t % 60;
            int complement = (60 - remainder) % 60; // The complement that makes the sum divisible by 60
            c += remainderFreq[complement];
            remainderFreq[remainder]++;
        }
        
        return c;
    }
};
