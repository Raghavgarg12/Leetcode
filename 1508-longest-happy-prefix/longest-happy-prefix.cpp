class Solution {
public:
    string longestPrefix(string s) {
        int n = s.length();
        const string_view s1(s);
        for(int i=n-1;i>=0;i--){
            // string s1=s.substr(0,i), s2=s.substr(n-i,n);
            if(s1.substr(0,i)==s1.substr(n-i,n)) return s.substr(0,i);
            // if(s1==s2) return s1;
        }
        return "";
    }
};