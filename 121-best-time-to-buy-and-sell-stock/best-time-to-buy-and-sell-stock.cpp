class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=INT_MAX,i,profit=0;
        for(i=0;i<n;i++)
        {
            mini=min(prices[i],mini);
            profit=max(profit,prices[i]-mini);
        }
        return profit;
    }
};