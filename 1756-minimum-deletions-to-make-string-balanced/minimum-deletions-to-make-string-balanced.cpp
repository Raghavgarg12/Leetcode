class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        int dp=0;
        int b_count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'b') b_count++;
            else dp = min(dp + 1, b_count);
        }
        return dp;
    }
};