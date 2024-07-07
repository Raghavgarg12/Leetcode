class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles,temp=numBottles%numExchange;
        numBottles/=numExchange;
        while(numBottles>0){
            ans+=numBottles;
            numBottles+=temp;
            temp=numBottles%numExchange;
            numBottles/=numExchange;
        }
        return ans;
    }
};