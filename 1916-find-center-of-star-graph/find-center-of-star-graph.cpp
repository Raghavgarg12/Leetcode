class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        // int n = edges.size();
        // int m=edges[0].size();
        // int maxi=0;
        // vector<int>arr(n+2,0);
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         arr[edges[i][j]]++;
        //         maxi=max(maxi,arr[edges[i][j]]);
        //     }
        // }
        // int ans=find(arr.begin(),arr.end(),maxi)-arr.begin();
        // return ans;
        vector<int> firstEdge = edges[0];
        vector<int> secondEdge = edges[1];
        return (firstEdge[0] == secondEdge[0] || firstEdge[0] == secondEdge[1])
                   ? firstEdge[0] : firstEdge[1];
    }
};