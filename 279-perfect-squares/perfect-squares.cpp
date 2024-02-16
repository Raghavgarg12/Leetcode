// BEGINER 
// class Solution {
// public:
//     int numSquares(int n) {
//         // dp vector to store answer from [1, n]
//         vector<int> dp(n+1);

//         // Mark ans for perfect square numbers as 1
//         for(int i=1; i*i<=n; i++){
//             dp[i*i] = 1;
//         }

//         // find the answer from [1, n]
//         for(int i=1; i<=n; i++){
//             // if perfect square then skip
//             if(dp[i] == 1) continue;

//             // find the root of i
//             // current ans is min of ans[j*j] + ans[i - j*j]
//             int root = sqrt(i), mn = INT_MAX;
//             for(int j=root; j>=1; j--){
//                 mn = min(mn, dp[j*j] + dp[i - j*j]);
//             }
//             dp[i] = mn;
//         }

//         return dp[n];
//     }
// };

// ADVANCE

class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j * j <= i; ++j){
            dp[i] = min(dp[i], dp[i - j * j] + 1);
            }
        }
        return dp[n];
    }
};