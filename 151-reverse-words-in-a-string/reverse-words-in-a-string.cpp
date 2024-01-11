// using namespace std;
// class Solution {
// public:
//     string reverseWords(string s) {
//         while(s.at(0)==' ') s.erase(0,1);
//         int n = s.length(),i,k;
//         string ans;
//         while(s.at(n-1)==' ') {
//             s.erase(n-1,n);
//             n = s.length();
//         }
//         cout<<s;
//         n=s.length();
//         k=n-1;
//         cout<<k<<endl;
//         for(i=n-1;i>=0;i--){
//             if(s.at(i)==' '){
//                 if(s.at(i+1)==' ') {
//                     k--;
//                     continue;
//                 }
//                 ans=ans+s.substr(i+1,k-i)+" ";
//                 k=i-1;
//             }
//         }
//         ans=ans+s.substr(0,k+1);
//     return ans;
//     }
// };
class Solution {
public:
    string reverseWords(string s) {
        vector<string>ans;
        stringstream ss(s);
        string token;
        while(ss>>token){
            ans.push_back(token);
        }
        reverse(ans.begin(),ans.end());
        token="";
        for(auto x:ans){
            token +=x;
            token+=" ";
        }
        token.pop_back();
        return token;
    }
};