// class Solution {
// public:
//     int timeRequiredToBuy(vector<int>& tickets, int k) {
//         int ans=0, n=tickets.size(),i=0;
//         while(tickets[k]!=0){
//             if(i>=n) i=0;
//             if(tickets[i]==0){
//                 i++;
//                 continue;
//             }
//             else{
//                 tickets[i]--;
//                 ans++;
//                 i++;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int total = 0;

        for (int i = 0; i < tickets.size(); ++i) {
            if (i <= k) {
                total += min(tickets[i], tickets[k]);
            } else {
                total += min(tickets[i], tickets[k] - 1);
            }
        }

        return total;
    }
};