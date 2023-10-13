// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         int mini=INT_MAX,i,profit=0;
//         for(i=0;i<n;i++)
//         {
//             mini=min(prices[i],mini);
//             profit=max(profit,prices[i]-mini);
//         }
//         return profit;
//     }
// };
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX;
        int op = 0;
        int pist = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){
                lsf = prices[i];
            }
            pist = prices[i] - lsf;
            if(op < pist){
                op = pist;
            }
        }
        return op;
    }
};