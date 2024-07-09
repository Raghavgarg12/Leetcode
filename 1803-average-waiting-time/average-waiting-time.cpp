class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double time=customers[0][0],wait=0;
        for(const auto& x: customers){
            time=max<double>(time,x[0])+x[1];
            wait+=time-x[0];
        }
        return wait/customers.size();
    }
};