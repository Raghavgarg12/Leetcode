// class Solution {
// public:
//     string longestPrefix(string s) {
//         int n = s.length();
//         const string_view s1(s);
//         for(int i=n-1;i>=0;i--) if(s1.substr(0,i)==s1.substr(n-i,n)) return s.substr(0,i);
//         return "";
//     }
// };
class Solution {
public:
    string longestPrefix(string s) {
        string ans="";
        vector<int>pos(s.size(), 0);
        int i=0, j=1;
        while(j<s.size()){
            if(s[i]==s[j]){
                pos[j]=i+1;
                i++;
                j++;
            }
            else if(i){
                i=pos[i-1];
            }
            else{
                j++;
            }
        }
        ans=s.substr(0, i);
        return ans;
    }
};