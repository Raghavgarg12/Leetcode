// class Solution {
// public:
//     string removeOuterParentheses(string s) {
//         int n =s.length();
//         int i,l=0,x=0;
//         for(i=0;i<n;i++){
//             if(s.at(i)=='(') l++;
//             else if (s.at(i)==')') l--;
//             if(l==0) {
//                 s.erase(s.begin()+x);
//                 s.erase(s.begin()+i-1);
//                 i=i-2;
//                 x=i+1;
//                 n=s.length();
//             }
//         }
//         return s;
//     }
// };
class Solution {
public:
    string removeOuterParentheses(string S) {
        string res;
        int opened = 0;
        for (char c : S) {
            if (c == '(' && opened++ > 0) res += c;
            if (c == ')' && opened-- > 1) res += c;
        }
        return res;
    }
};