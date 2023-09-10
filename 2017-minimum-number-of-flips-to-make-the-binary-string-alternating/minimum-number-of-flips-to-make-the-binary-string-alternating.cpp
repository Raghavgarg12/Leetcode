class Solution {
public:
    int minFlips(string s) {
        int n=s.size();
        s+=s;
        int c=s.size();
        int i, j, a1=0,a2=0,a3=INT_MAX;
        string s1, s2;
        for(int i = 0; i < c; i++) {
            s1 += i % 2 ? '0' : '1';
            s2 += i % 2 ? '1' : '0';
        }
        for(i=0;i<c;i++){
            if(s[i]!=s1[i]) ++a1;
            if(s[i]!=s2[i]) ++a2;
            if(i>=n){
                if(s[i-n]!=s1[i-n]) --a1;
                if(s[i-n]!=s2[i-n]) --a2;
                a3=min({a1,a2,a3});
            }
        }
        return a3;
    }
};