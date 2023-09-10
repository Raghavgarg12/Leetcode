#include <bits/stdc++.h>
// class Solution {
// public:
//     int maxVowels(string s, int k) {
//         int i, n=s.size(),sum=0,ans=0;
//         unordered_set<char> a={'a','e','i','o','u'};
//         for(i=0;i<n;i++){
//             if(a.find(s[i])!=a.end()) sum+=1;
//             if(i>=k) if(a.find(s[i-k])!=a.end()) sum-=1;
//             ans=max(ans,sum);
//         }        
//         return ans;
//     }
// };
class Solution {
public:
    int maxVowels(string s, int k) {
        int i, n=s.size(),sum=0,ans=0;
        for(i=0;i<k;i++)
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') sum+=1;
            ans=max(ans,sum);
        for(i=k;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') sum+=1;
            if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u') sum-=1;
            ans=max(ans,sum);
        }        
        return ans;
    }
};