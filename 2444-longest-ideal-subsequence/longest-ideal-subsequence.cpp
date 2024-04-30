class Solution {
public:
    int longestIdealString(string s, int k) {
        int n = s.size();
        vector<int>dp(26,0);
        int res=0;
        for(int i=0;i<n;i++){
            int curr = s[i]-'a';
            int best=0;
            for(int prev=max(0,curr-k);prev<min(26,curr+k+1);prev++){
                best=max(best,dp[prev]);
            }
            dp[curr]=best+1;
            res=max(res,dp[curr]);
        }
        return res;
        // string ans="";
        // for(int i=1;i<n;i++){
        //     if(abs(s[i]-s[j])<=k){
        //         ans+=s[i];
        //         j=i;
        //     }
        // }
        // return ans.size()+1;
    }
};
// jxwaa