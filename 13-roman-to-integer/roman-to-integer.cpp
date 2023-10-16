class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int i,ans=0;
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        for(i=n-1;i>=0;i--){
            ans+=m[s[i]];
            if(i>0 && m[s[i-1]]<m[s[i]]) ans-=m[s[i-1]], i--;
        }
        return ans;
    }
};