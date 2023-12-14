class Solution {
public:
    string removeOuterParentheses(string s) {
        int n =s.length();
        cout<<n;
        int i,l=0,x=0;
        for(i=0;i<n;i++){
            if(s.at(i)=='(') l++;
            else if (s.at(i)==')') l--;
            if(l==0) {
                s.erase(s.begin()+x);
                s.erase(s.begin()+i-1);
                i=i-2;
                x=i+1;
                n=s.length();
            }
        }
        return s;
    }
};