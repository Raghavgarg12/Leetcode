// class Solution {
// public:
//     int check(string x){
//         string z=x;
//         reverse(x.begin(),x.end());
//         if(x==z) return 1;
//         else return 0;
//     }
//     string shortestPalindrome(string s) {
//         int n = s.length();
//         int i,j=n-1;
//         string ss=s;
//         reverse(ss.begin(),ss.end());
//         if(s==ss) return s;
//         const string_view sv_t(s), sv_s(ss);
//         for(i=n;i>=0;i--){
//             if(check(sv_t.substr(0,i))==1) break;
//         }
//         ss=s.substr(i,n-i);
//         reverse(ss.begin(),ss.end());
//         s=ss+s;
//         return s;
//     }
// };
class Solution {
 public:
  string shortestPalindrome(string s) {
    string t = s;
    reverse(begin(t),end(t));
    const string_view sv_t(t),sv_s(s);
    for (int i = 0; i < s.length(); ++i)
    if (sv_t.substr(i) == sv_s.substr(0, s.length() - i)) return t.substr(0, i)+s;
    return t + s;
  }
};