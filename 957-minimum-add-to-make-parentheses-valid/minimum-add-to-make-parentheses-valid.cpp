class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.length();
        int i,l=0,r=0;
        for(i=0;i<n;i++){
            if(s[i]=='(') l++;
            if(s[i]==')') l--;
            if(l<0) {
                r=r+l;
                l=0;
            }
        }
        return abs(l-r);
    }
};