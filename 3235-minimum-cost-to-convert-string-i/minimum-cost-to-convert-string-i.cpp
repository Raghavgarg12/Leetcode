class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        vector<vector<long long>>mincost(26,vector<long long>(26,INT_MAX));
        long long total=0,n=original.size(),m=source.size();
        for(int i=0;i<n;i++){
            mincost[original[i]-'a'][changed[i]-'a']=min((long long)cost[i],mincost[original[i]-'a'][changed[i]-'a']);
        }
        for(int k=0;k<26;k++){
            for(int i=0;i<26;i++){
                for(int j=0;j<26;j++){
                    mincost[i][j]=min(mincost[i][j],mincost[i][k]+mincost[k][j]);
                }
            }
        }
        for(int i=0;i<m;i++){
            if(source[i]==target[i]) continue;
            if(mincost[source[i]-'a'][target[i]-'a']>=INT_MAX) return -1;
            total+=mincost[source[i]-'a'][target[i]-'a'];
        }
        return total;
    }
};