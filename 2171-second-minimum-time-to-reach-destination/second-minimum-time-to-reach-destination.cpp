class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        vector<vector<int>>adjlist(n+1);
        for(auto x:edges){
            adjlist[x[0]].push_back(x[1]);
            adjlist[x[1]].push_back(x[0]);
        }
        queue<pair<int,int>>q;
        vector<int>dist1(n+1,-1),dist2(n+1,-1);
        q.push({1,1});
        dist1[1]=0;
        while(!q.empty()){
            auto [node,freq]=q.front();
            q.pop();
            int taken=freq==1?dist1[node]:dist2[node];
            if((taken/change)%2==1){ //red
                taken+=(change-(taken)%change)+time;
            }
            else taken+=time;
            for(int neigh: adjlist[node]){
                if(dist1[neigh]==-1){
                    dist1[neigh]=taken;
                    q.push({neigh,1});
                }
                else if(dist2[neigh]==-1 && dist1[neigh]!=taken){
                    if(neigh==n) return taken;
                    dist2[neigh]=taken;
                    q.push({neigh,2});
                }
            }
        }
        return 0;
    }
};