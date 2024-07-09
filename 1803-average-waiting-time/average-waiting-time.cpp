class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double time=customers[0][0],wait=0;
        for(auto x: customers){
            cout<<wait<<" "<<time<<endl;
            wait+=max(time-x[0],0.00)+x[1];
            time=max<double>(time,x[0])+x[1];
        }
        return wait/customers.size();
    }
};