class Solution {
public:
    bool isPalindrome(int x) {
        string s= to_string(x)+to_string(x);
        int n=s.length();
        int i=0;
        for(i=0;i<n;i++)
            if(s[i]!=s[n-i-1]) return false;
        return true;
    }
};