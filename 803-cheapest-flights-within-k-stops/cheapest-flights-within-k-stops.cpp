class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        unordered_map<int,vector<pair<int,int>>>adj;
        vector<int>visited(n,INT_MAX);
        visited[src]=0;
        for(auto x:flights) adj[x[0]].push_back({x[1],x[2]});
        queue<pair<int,int>>qu;
        qu.push({src,0});
        k++;
        while(k--){
            int size=qu.size();
            while(size--){
                int curr_price=qu.front().second;
                for(auto x:adj[qu.front().first]){
                    int new_price=x.second+curr_price;
                    if(new_price<visited[x.first]){
                        visited[x.first]=new_price;
                        qu.push({x.first,new_price});
                    }
                }
                qu.pop();
            }
        }
        return (visited[dst]==INT_MAX)? -1:visited[dst];
    }
};