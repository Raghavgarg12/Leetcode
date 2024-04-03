class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size(), s = word.length();
        function<bool(int, int, int)> check = [&](int i, int j, int k){
            if (k == s) {
                return true;
            }
            if (i < 0 || i >= n || j < 0 || j >= m || board[i][j] != word[k]) {
                return false;
            }
            char temp = board[i][j];
            board[i][j] = '\0';
            bool ans = (check(i+1,j,k+1) ||
            check(i-1,j,k+1) ||
            check(i,j+1,k+1) ||
            check(i,j-1,k+1));
            board[i][j] = temp;
            return ans;
        };
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(check(i,j,0)) return true;
            }
        }
        return false;
    }
};