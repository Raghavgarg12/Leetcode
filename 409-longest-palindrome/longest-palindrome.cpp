class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        unordered_map<char,int>mp;
        int ans=0;
        for(auto x: s) if(++mp[x]%2==0) ans+=2;
        if(n>ans) return ans+1;
        return ans;
    }
};