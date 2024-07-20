class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>row(n,INT_MAX),col(m,INT_MIN),ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                row[i]=min(row[i],matrix[i][j]);
                col[j]=max(col[j],matrix[i][j]);
            }
        }
        int maxi=*max_element(row.begin(),row.end());
        int mini=*min_element(col.begin(),col.end());
        if(maxi==mini) 
            ans.push_back(maxi);
        return ans;
    }
};