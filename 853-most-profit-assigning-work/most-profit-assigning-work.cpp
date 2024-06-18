class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        // int ans=0;
        // for(int i=0;i<worker.size();i++){
        //     for(int j=profit.size()-1;j>=0;j--){
        //         if(difficulty[j]<=worker[i]) {
        //             ans+=profit[j];
        //             break;
        //         }
        //     }
        // }
        // return ans;
        int n=profit.size();
        int ans=0,temp=0,i=0;
        vector<pair<int,int>> cp(n);
        for(i=0;i<n;i++) cp[i]={difficulty[i],profit[i]};
        sort(cp.begin(),cp.end());
        sort(worker.begin(),worker.end());
        // priority_queue<int>pq;
        i=0;
        for(auto x: worker){
            while(i<n && cp[i].first<=x){
                temp=max(temp,cp[i].second);
                i++;
                // pq.push(cp[i].second);
            }
            // if(!pq.empty()) ans+=pq.top();
            ans+=temp;
        }
        return ans;
    }
};