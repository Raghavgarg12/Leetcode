class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty() || matrix[0].empty()) return result;
        int n=matrix.size(),m=matrix[0].size();
        int left=0,right=m-1,top=0,bottom=n-1;
        int i;
        while (true){
            for(i=left;i<=right;i++){
                result.push_back(matrix[top][i]);
            }
            top++;
            if(result.size()==m*n) break;
            for(i=top;i<=bottom;i++){
                result.push_back(matrix[i][right]);
            }
            right--;
            if(result.size()==m*n) break;
            if(top<=bottom){
                for(i=right;i>=left;i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(result.size()==m*n) break;
            if(left<=right){
                for(i=bottom;i>=top;i--){
                    result.push_back(matrix[i][left]);   
                }
                left++;
            }
            if(result.size()==m*n) break;
        } 
        return result;  
    }
};