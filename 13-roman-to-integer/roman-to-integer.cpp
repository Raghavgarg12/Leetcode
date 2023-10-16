// class Solution {
// public:
//     int romanToInt(string s) {
//         int n = s.length();
//         int i,ans=0;
//         unordered_map<char, int> m;
//         m['I'] = 1;
//         m['V'] = 5;
//         m['X'] = 10;
//         m['L'] = 50;
//         m['C'] = 100;
//         m['D'] = 500;
//         m['M'] = 1000;
//         for(i=n-1;i>=0;i--){
//             ans+=m[s[i]];
//             if(i>0 && m[s[i-1]]<m[s[i]]) ans-=m[s[i-1]], i--;
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int i,ans=0;
        vector<int> s2(n);
        for(i=0;i<n;i++){
            if(s.at(i)=='I') s2[i]=1;
            else if(s.at(i)=='V') s2[i]=5;
            else if(s.at(i)=='X') s2[i]=10;
            else if(s.at(i)=='L') s2[i]=50;
            else if(s.at(i)=='C') s2[i]=100;
            else if(s.at(i)=='D') s2[i]=500;
            else if(s.at(i)=='M') s2[i]=1000;
        }
        for(i=n-1;i>=0;i--){
            ans+=s2[i];
            if(i>0 && s2[i-1]<s2[i]) ans-=s2[i-1], i--;
        }
        return ans;
    }
};