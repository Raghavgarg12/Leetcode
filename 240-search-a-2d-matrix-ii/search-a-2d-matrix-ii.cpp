class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>col;
        vector<int> row;
        int n=matrix.size();
        int m=matrix[0].size();
        int i,j;
        int rmin=INT_MAX,rmax=INT_MIN,cmin=INT_MAX,cmax=INT_MIN;
        for(i=0;i<n;i++)
        {
            if(matrix[i][0]<=target && target<=matrix[i][m-1]) row.push_back(i);
        }
        for(i=0;i<m;i++)
        {
            if(matrix[0][i]<=target && target<=matrix[n-1][i]) col.push_back(i);
        }
        if(row.size()==0 || col.size()==0) return false;
        for(auto i:row){
            rmin=min(i,rmin);
            rmax=max(rmax,i);
        }      
        for(auto i:col){
            cmin=min(cmin,i);
            cmax=max(cmax,i);
        }
        cout<<cmax<<endl;
        row.clear();
        col.clear();
        for(i=rmin;i<=rmax;i++){
            if(matrix[i][cmin]<=target && target<=matrix[i][cmax]) row.push_back(i);
        }
        for(i=cmin;i<=cmax;i++){
            if(matrix[rmin][i]<=target && target<=matrix[rmax][i]) col.push_back(i);
        }
        for(auto i:row){
            rmin=min(i,rmin);
            rmax=max(rmax,i);
        }      
        for(auto i:col){
            cmin=min(cmin,i);
            cmax=max(cmax,i);
        }
        for(i=rmin;i<=rmax;i++){
            for(j=cmin;j<=cmax;j++){
                if(matrix[i][j]==target) return true;
            }
        }
        return false;
    }
};