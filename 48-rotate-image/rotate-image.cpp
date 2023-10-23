class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size(), m=matrix[0].size();
        int i,j=0;
        for(i=1;i<n;i++)
            for(j=0;j<=i;j++)
            swap(matrix[i][j],matrix[j][i]);

        for(j=0;j<n/2;j++){
            for(i=0;i<n;i++)
                swap(matrix[i][j],matrix[i][n-j-1]);
        }
    }
};