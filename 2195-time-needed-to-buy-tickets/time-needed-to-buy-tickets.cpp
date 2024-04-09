class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0, n=tickets.size(),i=0;
        while(tickets[k]!=0){
            if(i>=n) i=0;
            if(tickets[i]==0){
                i++;
                continue;
            }
            else{
                tickets[i]--;
                ans++;
                i++;
            }
        }
        return ans;
    }
};