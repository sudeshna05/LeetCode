class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=1,maxi=0;
        while(j<prices.size())
        {
            if(prices[i]<prices[j])
            {
                maxi=max(maxi,prices[j]-prices[i]);
            }
                
            else 
            {
                i=j;
            }
            j++;
        }
        
        return maxi;
    }
};