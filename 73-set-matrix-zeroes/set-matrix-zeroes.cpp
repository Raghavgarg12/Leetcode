// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int n=matrix.size(), m=matrix[0].size();
//         int i, j, row=0, col=0;
//         for(i=0;i<n;i++) if(matrix[i][0]==0) col=1;
//         for(j=0;j<m;j++) if(matrix[0][j]==0) row=1;
//         for(i=1;i<n;i++){
//             for(j=1;j<m;j++){
//                 if(matrix[i][j]==0){
//                     matrix[i][0]=0;
//                     matrix[0][j]=0;
//                 }
//             }
//         }
//         for(i=1;i<n;i++){
//             if(matrix[i][0]==0){
//                 for(j=1;j<m;j++) matrix[i][j]=0;
//             }
//         }
//         for(j=1;j<m;j++){
//             if(matrix[0][j]==0){
//                 for(i=1;i<n;i++) matrix[i][j]=0;
//             }
//         }
//         if(col==1) for(i=0;i<n;i++) matrix[i][0]=0;
//         if(row==1) for(j=0;j<m;j++) matrix[0][j]=0;
//     }
// };
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_set<int> setRows; 
        unordered_set<int> setColumns; 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    setRows.insert(i);
                    setColumns.insert(j);
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(setRows.count(i) > 0 || setColumns.count(j) > 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};